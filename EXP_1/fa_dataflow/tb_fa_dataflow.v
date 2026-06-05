`timescale 1ns/1ps
 
module tb_fa_dataflow;
    reg  A, B, Cin;
    wire Sum, Cout;
 
    fa_dataflow DUT (.A(A), .B(B), .Cin(Cin), .Sum(Sum), .Cout(Cout));
 
    integer i, errors;
    reg exp_s, exp_c;
 
    initial begin
        $display("==========================================");
        $display("  TESTBENCH: fa_dataflow");
        $display("  A  B Cin | Exp_Sum Exp_Cout | Got_Sum Got_Cout | Result");
        $display("==========================================");
        errors = 0;
 
        for (i = 0; i < 8; i = i + 1) begin
            {A, B, Cin} = i[2:0];
            #10;
            exp_s = A ^ B ^ Cin;
            exp_c = (A & B) | (B & Cin) | (A & Cin);
 
            if (Sum === exp_s && Cout === exp_c)
                $display("  %b  %b  %b  |    %b       %b    |    %b       %b    |  PASS",
                          A, B, Cin, exp_s, exp_c, Sum, Cout);
            else begin
                $display("  %b  %b  %b  |    %b       %b    |    %b       %b    |  FAIL",
                          A, B, Cin, exp_s, exp_c, Sum, Cout);
                errors = errors + 1;
            end
        end
 
        $display("==========================================");
        if (errors == 0)
            $display("  ALL 8 VECTORS PASSED");
        else
            $display("  FAILED: %0d error(s)", errors);
        $display("==========================================");
        $finish;
    end
endmodule