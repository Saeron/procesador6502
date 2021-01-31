#include <iostream>

#include "cpu.h"
#include "memory.h"

int main()
{
    CPU cpu;
    Memory memory;
    
    cpu.reset(memory);
    cpu.execute(2, memory);
    
    return 0;
}