module rom(
	input wire [31:0] inst_addr_i,
	output reg [31:0] inst_o

);

	reg[31:0]  rom_mem[0:4905]; //4094 32'b

	always @(*)  begin
		inst_o	= rom_mem[inst_addr_i>>2]; // pc+4 +4   mem+1 +1  Reduce by 4 times
	end

endmodule
