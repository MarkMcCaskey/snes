#ifndef SNES_HEADER
#define SNES_HEADER

#include <util.h>
#include <cpu.h>
#include <memory.h>
#include <inttypes.h>

typedef struct snes {
        cpu cpu;
        u32 address_bus_a;
        u8 data_bus;
        u8 address_bus_b;
        memory* memory; //maybe make this not a pointer
} snes;


void dispatch_opcode(snes*);
void update_memory(snes*);


#endif
