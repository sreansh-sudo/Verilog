module d_latch (
    input wire d,
    input wire en,
    input wire rst,
    output reg q
);

always @(*) begin
    if(rst)
        q <= 1'b0;
    else if(en)
        q <= d;
end
    
endmodule
