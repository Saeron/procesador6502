#include "memory.h"

void Memory::initialise()
{
    for  (u32 i = 0; i < MAX_MEMORY; ++i)
    {
        _data[i] = 0;
    }
}
