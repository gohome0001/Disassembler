#ifndef OPSTRUCT_H
#define OPSTRUCT_H

#define MAX_OPERAND 4
#define MAX_PREFIX 3

typedef enum{
    FALSE, TRUE
}BOOL, P_BOOL*

// define sizes.

typedef unsigned char BYTE;
typedef unsigned short WORD;
typedef unsigned int DWROD;
typedef unsigned long QWORD; // sizeof(long) == 8

typedef struct      // disassembled code
{


    BYTE prefix;
    BYTE opcode;  
    BYTE mod_rm;
    BYTE SIG;
    BYTE disp;
    void* imm;
}opcode, p_opcode*;

typedef struct
{
    BYTE opcode; // opcode or prefix.
    char* opcode_str;
    BYTE flags;
    /*
    0 : has next byte(as a opcode. if prefix, should be 1)
    1 : isPrefix
    3 : has mod/rm
    4~6 : opcode extention available?
        0 : this is the last
        1 : mod R/M's R/M section extention.
        2 : escape to next byte section.
    7 : unknown identifier - error
    */
}map_code, p_map_code*;

// map_code map[0xff];

#endif


