`timescale 1ns / 1ps
module imm_n(
    input [31: 0] instr,
    input [2: 0] extOP,
    
		output reg [31: 0] imm_32
);
    wire [6:0] unused_bits = instr[6:0];
always @(*) begin
	  case (extOP)
        3'b000:begin
            imm_32 = {{20{instr[31]}}, instr[31:20]};
        end
        3'b001:begin
            imm_32 = {instr[31:12], 12'b0};
        end
        3'b010:begin
            imm_32 = {{20{instr[31]}}, instr[31:25], instr[11:7]};
        end
        3'b011:begin
            imm_32 = {{20{instr[31]}}, instr[7], instr[30:25], instr[11:8], 1'b0};
        end
        3'b100:begin
            imm_32 = {{12{instr[31]}}, instr[19:12], instr[20], instr[30:21], 1'b0};
        end
        3'b101:begin
            imm_32 = {{20{instr[31]}}, instr[31:20]};
            imm_32[10] = 0;
        end
        3'b111:begin
            imm_32 = 32'b0;
        end 
        default:begin
            imm_32 = 32'b0;            
        end 
    endcase
end
endmodule;
