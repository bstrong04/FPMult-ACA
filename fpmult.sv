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



endmodule


module multcontrol (
    input  logic adx                   // Start mult flag 
    output logic mdone                 // Mult complete flag
);

// Loop call fracmult module

always_comb begin : blockName
    
end

endmodule


module fracmult (
    input  logic [7:0]  b              // Multiplicand
    input  logic [16:0] acc            // Accumulator
    input  logic addsh                 // Add-Shift flag
    input  logic clk_in                // clock
    output logic [15:0] p              // Product
    output logic m                     // new LSB of multiplier
);

endmodule