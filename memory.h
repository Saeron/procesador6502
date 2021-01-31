#ifndef MEMORY_H
#define MEMORY_H

#include "definitions.h"

class Memory
{
public:

    void initialise();

    Byte operator[](u32 address)
    {
        Byte instruction = 0;

        if (address >= 0 && address <= MAX_MEMORY)
        {
            instruction = _data[address];
        }
        
        return instruction;
    }

private:

    Byte _data[MAX_MEMORY];

};

#endif
