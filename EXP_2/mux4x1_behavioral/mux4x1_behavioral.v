// 4x1 Multiplexer - Behavioral Modeling
// Implements case statement based selection logic
`timescale 1ns/1ps // Time unit = 1ns, time precision = 1ps
module mux4x1_behavioral (
 input [3:0] in, // 4-bit input bus
 input [1:0] sel, // 2-bit select input
 output reg out // Single output bit
);
 always @(*) begin // Combinational logic block
 case (sel)
 2'b00: out = in[0]; // Select input 0
 2'b01: out = in[1]; // Select input 1
 2'b10: out = in[2]; // Select input 2
 2'b11: out = in[3]; // Select input 3
 default: out = 1'bx; // Undefined case
 endcase
 end
endmodule

