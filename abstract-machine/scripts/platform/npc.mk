AM_SRCS := riscv/npc/start.S \
           riscv/npc/trm.c \
           riscv/npc/ioe.c \
           riscv/npc/timer.c \
           riscv/npc/input.c \
           riscv/npc/cte.c \
           riscv/npc/trap.S \
           platform/dummy/vme.c \
           platform/dummy/mpe.c

CFLAGS    += -fdata-sections -ffunction-sections
LDFLAGS   += -T $(AM_HOME)/scripts/linker.ld \
						 --defsym=_pmem_start=0x80000000 --defsym=_entry_offset=0x0
LDFLAGS   += --gc-sections -e _start
NSIMFLAGS += -l $(shell dirname $(IMAGE).elf)/nsim-log.txt 
NSIMFLAGS += -t $(shell dirname $(IMAGE).elf)/nsim-trace.vcd 
NSIMFLAGS += -e "$(IMAGE).elf" -b
CFLAGS += -DMAINARGS=\"$(mainargs)\"
.PHONY: $(AM_HOME)/am/src/riscv/npc/trm.c

image: $(IMAGE).elf
	@$(OBJDUMP) -d $(IMAGE).elf > $(IMAGE).txt
	@echo + OBJCOPY "->" $(IMAGE_REL).bin
	@$(OBJCOPY) -S --set-section-flags .bss=alloc,contents -O binary $(IMAGE).elf $(IMAGE).bin
run: image
	$(MAKE) -C $(NSIM_HOME) ISA=$(ISA) run ARGS="$(NSIMFLAGS)" IMG=$(IMAGE).bin
gdb: image
	$(MAKE) -C $(NSIM_HOME) ISA=$(ISA) gdb ARGS="$(NSIMFLAGS)" IMG=$(IMAGE).bin
