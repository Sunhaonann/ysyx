module id(
  //from if_id
  input wire[31:0] inst_i,
  input wire[31:0] inst_addr_i,

  // to regs
  output reg[4:0]  rs1_addr_o,
	output reg[4:0]  rs2_addr_o,
 
 	//from regs
  input wire [31:0] rs1_data_i,
	input wire [31:0] rs2_data_i,
  //to id ex
  output reg [31:0] inst_o,
  output reg [31:0] inst_addr_o,
  output reg [31:0] op1_o,
	output reg [31:0] op2_o,
  output reg [4:0]  rd_addr_o,
  output reg        reg_wen
);

	import "DPI-C" function void handle_ebreak();
	wire[6:0] opcode;
	wire[4:0] rd;
	wire[2:0] func3;
	wire[4:0] rs1;
	wire[11:0]imm;
  wire[6:0] func7;
	wire[4:0] rs2;

	assign opcode = inst_i[6:0];
	assign rd     = inst_i[11:7];
	assign func3  = inst_i[14:12];
	assign rs1    = inst_i[19:15];
	assign rs2    = inst_i[24:20];
	assign func7  = inst_i[31:25];
	assign imm    = inst_i[31:20];

  always @(*) begin
    inst_o      = inst_i;
		inst_addr_o = inst_addr_i;
	
		if(opcode == 7'b1110011 && imm == 12'b000000000001) begin //ebreak
		  	handle_ebreak();
		end


		case(opcode)
			`INST_TYPE_I :begin
					case(func3)
						`INST_ADDI:begin
								rs1_addr_o  =  rs1;
								rs2_addr_o  =  5'b0;
								op1_o       =  rs1_data_i;
								op2_o       =  {{20{imm[11]}} , imm};
								rd_addr_o   =  rd;
								reg_wen     =  1'b1;
						end

						default:begin
								rs1_addr_o  =  5'b0;
  							rs2_addr_o  =  5'b0;
								op1_o       =  32'b0;
								op2_o       =  32'b0;
								rd_addr_o   =  5'b0;
								reg_wen     =  1'b0;
						end
					endcase
			end
			/************************************
     `INST_TYPE_R_M:begin  
                case(func3) 
                  `INST_ADD_SUB:begin    
                      if(func7  == 7'b0000000) begin//add     
                      rd_data_o = op1_i + op2_i;     
                      rd_addr_o = rd_addr_i;   
                      rd_wen_o  = 1'b1;   
                      end           
                      else if(func7 == 7'b0100000) begin    
                      rd_data_o = op2_i - op1_i;   
                      rd_addr_o = rd_addr_i;   
                      rd_wen_o  = 1'b1;     
                      end           
                   end                               
                   default:begin       
                      rd_data_o = 32'b0; 
                      rd_addr_o = 5'b0;           
                      rd_wen_o =1'b0;  
                      end       
                endcase     
              end  
****************************************************************/
		default:begin
						rs1_addr_o  =  5'b0;
  					rs2_addr_o  =  5'b0;
						op1_o       =  32'b0;
						op2_o       =  32'b0;
						rd_addr_o   =  5'b0;
						reg_wen     =  1'b0;
				end
  endcase
end	

endmodule














