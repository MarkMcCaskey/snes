#include <util.h>
#include <cpu.h>
#include <stdlib.h>
#include <stdio.h>

cpu* make_cpu(void)
{
        cpu* new_cpu = malloc(sizeof(cpu));

        if(!new_cpu)
        {
                fprintf(stderr, "Fatal: could not create a CPU");
                exit(EXIT_FAILURE);
        }

        *new_cpu = (cpu) {
                .a= 0,
                .x= 0,
                .y= 0,
                .s= 0,
                .db= 0,
                .dp= 0,
                .pb= 0,
                .p= { 0 },
                .pc= 0,
        };

        return new_cpu;
}


