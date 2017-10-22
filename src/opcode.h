#ifndef OPSTRUCT_H
#define OPSTRUCT_H

// define sizes.

typedef unsigned char BYTE;
typedef unsigned short WORD;
typedef unsigned int DWROD;
typedef unsigned long QWORD; // sizeof(long) == 8\

typedef struct{
    BYTE prefix;
    BYTE opcode;  
    BYTE mod_rm;
    BYTE SIG;
    BYTE disp;
    void* imm;
}opcode;

#endif


