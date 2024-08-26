`timescale 1ns / 1ps
module mux_2_n(
    input signal,
    input [31: 0] a, b,

    output [31: 0] out
);

assign out = (signal == 0) ? a : b;

endmodule
