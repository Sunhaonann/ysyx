#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vtop_module_soc.h"
#include <iostream>
#include <vector>


extern bool simulation_end;

// mem
std::vector<uint32_t> memory = {
	    0x00000013, // NOP
		  0x00100093, // ADDI x1, x0, 1    
	    0x00000113, // ADDI x2, x0, 0
      0b00000000011000001000110110010011,
			0x00000013, 
			0x00000013, 
      0b00000000000100000000000001110011   //ebreak 
    // ... other inst
};


// mem_read code
uint32_t pmem_read(uint32_t addr) {
    uint32_t index = addr / 4;
    if (index < memory.size()) {
        return memory[index];
    } else {
        return 0; 
    }
}

// ebreak code
void handle_ebreak(){
	std::cout << "Ending simulation."<<std::endl;
	simulation_end = true;
}

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);

    // Instantiate the top module
    Vtop_module_soc* top = new Vtop_module_soc;

    // Initialize trace dump
    VerilatedVcdC* tfp = new VerilatedVcdC;
    Verilated::traceEverOn(true);
    top->trace(tfp, 99);  
    tfp->open("waveform.vcd");

    // Initialize simulation inputs
    top->clk = 0;
    top->rst = 0;

    int i = 0;
		while (!Verilated::gotFinish() && !simulation_end){
			
	    		top->clk = !top->clk;  // Toggle clock
					if (i > 5) top->rst = 1;  // De-assert reset after 5 cycles
				
					/*********** inst_i to top_module*********************/
					top->inst_i = pmem_read(top->inst_addr_o);
          

					top->eval(); // Evaluate model 
					tfp->dump(i); // Dump waveform data at this time step
					Verilated::timeInc(1);// Advance simulation time
          
					i++;
		}

    tfp->close();
    delete top;
    delete tfp;
    return 0;
}

