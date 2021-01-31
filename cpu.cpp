#include "cpu.h"

void CPU::reset(Memory& memory)
{
    _programCounter = 0xFFFC;
    _stackPointer = 0x0100;
    _carryFlag = Flag::DISABLED;
    _zeroFlag = Flag::DISABLED;
    _interruptionDisableFlag = Flag::DISABLED;
    _decimalModeFlag = Flag::DISABLED;
    _breakCommandFlag = Flag::DISABLED;
    _overflowFlag = Flag::DISABLED;
    _negativeFlag = Flag::DISABLED; 
    _registerA = 0;
    _registerX = 0;
    _registerY = 0;

    memory.initialise();
}

Byte CPU::fetchByte(u32& numberCycles, Memory& memory)
{
    Byte data = memory[_programCounter];
    ++_programCounter;    
    --numberCycles;

    return data;
}

void CPU::execute(u32 numberCycles, Memory& memory)
{
    while (numberCycles > 0)
    {
        Byte instruction = fetchByte(numberCycles, memory);
    }
}