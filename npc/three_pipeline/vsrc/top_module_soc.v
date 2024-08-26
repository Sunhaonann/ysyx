module top_module_soc(
		input wire           clk,
		input wire					 rst,
		output wire [31:0]   inst_addr_o,
		input wire [31:0]    inst_i
);

	//top_module  to  rom
	wire[31:0] top_module_inst_addr_o;

	//rom  to  top_module
	wire[31:0] rom_inst_o;
	
	assign inst_addr_o = top_module_inst_addr_o;
  assign rom_inst_o = inst_i;

	top_module top_module_inst(
	.clk               (clk),
	.rst               (rst),
	.inst_i            (rom_inst_o),
	.inst_addr_o       (top_module_inst_addr_o)
	);

/***********************************************
	rom rom_inst(
	.inst_addr_i       (top_module_inst_addr_o),
	.inst_o            (rom_inst_o            )
	);
************************************************/
	endmodule
