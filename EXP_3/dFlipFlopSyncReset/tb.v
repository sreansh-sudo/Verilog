module tb_dff_sync_reset;
    reg clk = 0, rst, d;
    wire q;

    dff_sync_reset uut (.clk(clk), .rst(rst), .d(d), .q(q));

    always #5 clk = ~clk;   // 10ns clock period

    initial begin
        rst = 1; d = 0;
        #7  rst = 0;         // reset de-asserted mid-cycle, but q won't reflect until next posedge
        #3  d = 1;
        #10 d = 0;
        #6  rst = 1;         // reset asserted mid-cycle → q does NOT change immediately here
        #4  rst = 0;         // waits for the next posedge clk to actually apply reset
        #20 $finish;
    end

    initial
        $monitor("t=%0t clk=%b rst=%b d=%b q=%b", $time, clk, rst, d, q);
endmodule
