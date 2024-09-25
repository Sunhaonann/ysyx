.PHONY: sim clean
all:

run: sim
	./obj_dir/Vcpu_tb +trace $(BATCH_MODE) $(IMG) $(ELF) $(DIFFTEST_REF)
gdb: sim
	gdb --args ./obj_dir/Vcpu_tb -trace $(BATCH_MODE) $(IMG) $(ELF) $(DIFFTEST_REF)

sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	verilator -cc --exe --build -x-assign fast --trace --assert --timing --coverage -CFLAGS -ggdb  -LDFLAGS -ggdb -j 8 \
	csrc/npc_main.cpp csrc/dpi/dpi.cpp csrc/sdb/sdb.c csrc/sdb/watchpoint.c csrc/sdb/expr.cpp \
	csrc/isa/reg.c csrc/common.cpp csrc/utils/disasm.cc \
	csrc/difftest/dut.cpp \
	/usr/lib/libreadline.so /usr/lib/libLLVM-18.so \
 vsrc/cpu_tb.v vsrc/alu_n.v vsrc/controller_n.v vsrc/cpu_n.v vsrc/data_mem_n.v vsrc/id_n.v vsrc/imm_n.v vsrc/instruction_mem_n.v vsrc/mux_2_n.v vsrc/mux_3_n.v vsrc/next_pc_n.v vsrc/pc_n.v vsrc/reg_file_n.v
clean:
	rm -rf obj_dir logs

include ../Makefile
