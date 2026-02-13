                if (product[15]) begin
                    if ((fix_exp != '0) && (fix_exp != '1)) begin
                        fix_exp += 1;
                    end
                    temp_prod >>= 1;
                end
                if (temp_prod != '0) begin
                    while (idx < 15 && temp_prod[14] == 1'b0 && fix_exp != '0) begin
                        idx += 1;
                        fix_exp -= 1;
                        temp_prod <<= 1;
                    end
                    if (temp_prod[14] != 0) begin
                        if (!x_hidden) begin
                            fix_exp += 1;
                        end
                        if (!y_hidden) begin
                            fix_exp += 1;
                        end
                    end 
                end