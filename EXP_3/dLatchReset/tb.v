module tb_d_latch_async_reset;
    reg d, en, rst;
    wire q;

    d_latch uut (.d(d), .en(en), .rst(rst), .q(q));

    initial begin
        d = 1; en = 0; rst = 0;
        #5  en = 1;          // latch opens, q follows d = 1
        #5  en = 0;          // latch closes, q holds at 1
        #5  rst = 1;         // reset asserted, en = 0 → q should STILL drop to 0 immediately (async)
        #5  en = 1;          // en goes high, rst still 1 → q stays 0
        #5  rst = 0;         // reset released, en = 1 → q follows d = 1 again
        #5  en = 0;          // latch closes, q holds at 1
        #10 $finish;
    end

    initial
        $monitor("t=%0t d=%b en=%b rst=%b q=%b", $time, d, en, rst, q);
endmodule
