`timescale 1ns / 1ps

module cpu_tb();

    reg clock, reset;
    
    cpu_n CPU(clock, reset);
    
    initial begin
        clock = 1'b0;
        reset = 1'b0;
        #1 reset = 1'b1;
        #1 reset = 1'b0;
    end

    always begin
        #1 clock <= ~clock;
    end
    initial begin
			$monitor("Time: %0t | clk: %b | rst: %b", $time, clock, reset); // 添加监视语句
		#500 $finish;
		end
endmodule
