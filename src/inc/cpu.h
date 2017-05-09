#ifndef CPU_HEADER
#define CPU_HEADER

#include <util.h>
#include <inttypes.h>

struct p {
        u8 n: 1;
        u8 v: 1;
        u8 m: 1;
        u8 x: 1;
        u8 d: 1;
        u8 i: 1;
        u8 z: 1;
        u8 c: 1;
};


typedef struct cpu {
        //accumulator
        uint16_t a; //assuming 16bit

        //indices
        uint16_t x;
        uint16_t y;

        uint16_t s; //stack pointer

        //data bank register
        uint16_t db;

        //data page register
        uint16_t dp;

        //program bank register
        uint16_t pb;

        struct p p;

        uint16_t pc;
} cpu;




cpu* make_cpu(void);

#endif
