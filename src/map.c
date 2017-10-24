#include "opcode.h"

map_code v_map[0xff];

int init_map(map_code** pv_map)
{
    int i;
    for(i=0;i<0x100;i++)
    {
        pv_map[i]-> op_prefix = i;
    }
    pv_map[0] -> opcode_str = ""; 
    // TODO : map all instructions..
}
