`timescale 1ns / 1ps

module cpu_tb();

    reg clk, rst;
    
    cpu_n CPU(clk, rst);
    
    initial begin
        clk = 1'b0;
        rst = 1'b0;
        #1 rst = 1'b1;
        #1 rst = 1'b0;
    end

    always begin
        #1 clk <= ~clk;
    end
    initial begin
			$monitor("Time: %0t | clk: %b | rst: %b", $time, clk, rst); // 添加监视语句
		#500 $finish;
		end
endmodule
