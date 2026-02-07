module fpmult #(parameter int P = 8, parameter int Q = 8) (
    input  logic rst_in_N,           // synchronous active-low reset
    input  logic clk_in,             // clock
    input  logic [P+Q-1:0] x_in,     // input X; x_in[P+Q-1] is the sign bit
    input  logic [P+Q-1:0] y_in,     // input Y: y_in[P+Q-1] is the sign bit
    input  logic [1:0] round_in,     // rounding mode specifier
    input  logic start_in,           // signal to start multiplication
    output logic [P+Q-1:0] p_out,    // output P: p_out[P+Q-1] is the sign bit
    output logic [3:0] oor_out,      // out-of-range indicator vector
    output logic valid_out,          // the outputs are valid
    output logic ready_out           // the FPM is ready to receive new inputs
);

// Input handling -> (multcontrol->fracmult) & (exponent handler / adder)
// Exponent adding -> x-exp + y-exp -  (127 for 8 bit exponent width)
// Sign handling -> x-sign ^ y-sign

// Calls / module setup for multcontrol

// Output assembling {sign, exponent, fraction};


endmodule


module multcontrol (
    input  logic [7:0]  a,              // Multiplier
    input  logic [7:0]  b,              // Multiplicand
    input  logic clk_in,                // Clock
    input  logic rst_n,                 // Reset-low signal (INITIAL STATE)
    input  logic adx,                   // Start mult flag 
    output logic [15:0] p,              // Product
    output logic mdone                  // Mult complete flag
);

// state == 0: IDLE/Waiting
// state == 1: Computing/Working
logic state[1:0];

// Flag to load registers in fracmult module
logic load;

// Flag to begin computation
logic computing;

fracmult fm (
    .a(a),
    .b(b),
    .clk_in(clk_in),
    .load(load),
    .computing(computing),
    .rst_n(rst_n),
    .p(p)
    .done(mdone)
);

// Loop call fracmult module
always @(posedge clk_in) begin
    case (state)
        0: begin // IDLE
            if (adx) begin
                load <= 1;
                state <= 1;
            end
        end
        1: begin // LOAD
            load <= 0;
            computing <= 1;
            state <= 2;
        end
        2: begin // COMPUTATION
            if (mdone) begin
                computing <= 0;
                state <= 0;
            end
        end
    endcase
end

endmodule

// Module responsible for shift-add multiplication
module fracmult (
    input  logic [7:0]  a,              // Multiplier
    input  logic [7:0]  b,              // Multiplicand
    input  logic clk_in,                // Clock
    input  logic load,                  // Start signal (LOAD)
    input  logic computing,             // Computing product flag
    input  logic rst_n,                 // Reset-low signal (INITIAL STATE)
    output logic [15:0] p,              // Product
    output logic done                   // Done w/ Multiplication flag 
);

logic [7:0] b_reg;
logic [16:0] acc_reg;
integer counter;

assign p = acc_reg;

always @(posedge clk_in) begin
    if (!rst_n) begin
        counter <= 8;
        done <= 0;
        acc_reg <= 0;
        b_reg <= 0;
    end
    else if (load) begin
        b_reg <= b;
        acc_reg[7:0] <= a;
    end
    else if (computing) begin
        if (acc_reg[0]) begin
            acc_reg[16:8] <= acc_reg[16:8] + b_reg; 
        end
        acc_reg <= acc_reg >> 1;
        counter <= counter - 1;
        done <= (counter == 0);
    end
end 

endmodule