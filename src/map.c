#include "opcode.h"

map_code v_oneB_map[0xff];

const char* AAA = "AAA";
const char* AAD = "AAD";
const char* AAM = "AAM";
const char* AAS = "AAS";

int init_map(map_code** pv_oneB_map)
{
    int i;
    for(i=0;i<=0xff;i++)
    {
        pv_oneB_map[i]-> op_prefix = i;
        if(i<=0x7f)
        {
            if(i<=0x3f)
            {
                if(i<=0x1f)
                {
                    if(i<=0xf)
                    {
                        if(i<=0x7) // 0x0~0x7
                        {
                            if(i<0x6)
                            {
                                pv_oneB_map[i]->opcode_str = 
                            }
                        }
                        else // 0x8~0xf
                        {

                        }
                    }
                    else
                    {
                        if(i<=0x17) // 0x10~0x17
                        {

                        }
                        else // 0x18~0x1f
                        {

                        }
                    }
                }
                else
                {
                    if(i<=0x2f) 
                    {
                        if(i<=0x27) // 0x20~0x27
                        {

                        }
                        else // 0x28~0x2f
                        {

                        }
                    }
                    else
                    {
                        if(i<=0x37) // 0x30~0x37
                        {

                        }
                        else // 0x38~0x3f
                        {

                        }
                    }
                }
            }
            else
            {
                if(i<=0x5f) 
                {
                    if(i<=4f)
                    {
                        if(i<=0x47) // 0x40~0x47
                        {

                        }
                        else // 0x48~0x4f
                        {

                        }
                    }
                    else
                    {
                        if(i<=0x57) // 0x50~0x57
                        {

                        }
                        else // 0x58~0x5f
                        {

                        }
                    }
                }
                else
                {
                    if(i<=0x6f)
                    {
                        if(i<=0x67) // 0x60~0x67
                        {

                        }
                        else // 0x68~0x6f
                        {

                        }
                    }
                    else
                    {
                        if(i<=0x77) // 0x70~0x77
                        {

                        }
                        else // 0x78~0x7f
                        {

                        }
                    }
                }
            }
        }
        else
        {
            if(i<=0xbf)
            {
                if(i<=0x9f)
                {
                    if(i<=0x8f)
                    {
                        if(i<=0x87) // 0x80~0x87
                        {

                        }
                        else // 0x88~0x8f
                        {

                        }
                    }
                    else
                    {
                        if(i<=0x97) // 0x90~97
                        {

                        }
                        else // 0x98~0x9f
                        {

                        }
                    }
                }
                else
                {
                    if(i<=0xaf)
                    {
                        if(i<=0xa7) // 0xa0~0xa7
                        {

                        }
                        else // 0xa8~0xaf
                        {

                        }
                    }
                    else
                    {
                        if(i<=0xb7) // 0xb0~0xb7
                        {

                        }
                        else // 0xb8~0xbf
                        {

                        }
                    }
                }
            }
            else
            {
                if(i<=0xdf)
                {
                    if(i<=0xcf)
                    {
                        if(i<=0xc7) // 0xc0~0xc7
                        {

                        }
                        else // 0xc8~0xcf
                        {

                        }
                    }
                    else
                    {
                        if(i<=0xd7) // 0xd0~0xd7
                        {

                        }
                        else // 0xd8~0xdf
                        {

                        }
                    }
                }
                else
                {
                    if(i<=0xef)
                    {
                        if(i<=0xe7) // 0xe0~0xe7
                        {

                        }
                        else // 0xe8~0xef
                        {

                        }
                    }
                    else
                    {
                        if(i<=0xf7) // 0xf0~0xf7
                        {

                        }
                        else // 0xf8~0xf7
                        {

                        }
                    }
                }
            }
        }
    }
    
}
