
CXX := g++
VERILATOR := verilator

# Verilator 的标志
VERILATOR_FLAGS := -Wall --cc --trace --timing --exe 

# 源代码目录
V_SRC := vsrc
C_SRC := csrc
SIM_DIR := sim_n

# 顶层模块和测试模块
TOP_MODULE := cpu_tb
#TB_MODULE := cpu_tb

# 输出目录
OBJ_DIR := obj_dir

# 输出文件名
OUTPUT := sim

# 所有 Verilog 源文件
VFILES := $(wildcard $(V_SRC)/*.v)

# 默认目标
all: $(OUTPUT)


# Verilator 生成的 Makefile
$(OBJ_DIR)/V$(TOP_MODULE).mk: $(VFILES) $(SIM_DIR)/$(TOP_MODULE).v $(C_SRC)/main.cpp
	$(VERILATOR) $(VERILATOR_FLAGS) -o $(OUTPUT) $(SIM_DIR)/$(TOP_MODULE).v $(VFILES) $(C_SRC)/main.cpp --Mdir $(OBJ_DIR) -top-module $(TOP_MODULE)

# 构建仿真
$(OUTPUT): $(OBJ_DIR)/V$(TOP_MODULE).mk
	make -C $(OBJ_DIR) -f V$(TOP_MODULE).mk
verilator:
	@echo "Building with Verilator"
	$(OBJ_DIR)/V$(TOP_MODULE).mk
# 清理目标
clean:
	rm -rf $(OBJ_DIR) $(OUTPUT)

.PHONY: all clean

