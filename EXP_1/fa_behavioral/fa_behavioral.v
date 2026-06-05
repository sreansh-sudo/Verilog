module fa_behavioral (
    input  wire A, B, Cin,
    output reg  Sum, Cout
);
    always @(*) begin
        case ({A, B, Cin})
            3'b000: {Cout, Sum} = 2'b00;
            3'b001: {Cout, Sum} = 2'b01;
            3'b010: {Cout, Sum} = 2'b01;
            3'b011: {Cout, Sum} = 2'b10;
            3'b100: {Cout, Sum} = 2'b01;
            3'b101: {Cout, Sum} = 2'b10;
            3'b110: {Cout, Sum} = 2'b10;
            3'b111: {Cout, Sum} = 2'b11;
            default:{Cout, Sum} = 2'bxx;
        endcase
    end
endmodule