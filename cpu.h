#ifndef CPU_H
#define CPU_H

#include "definitions.h"
#include "flag.h"
#include "memory.h"

class CPU
{
public:

    void reset(Memory& memory);

    void execute(u32 numberCycles, Memory& memory);

private:

    Byte fetchByte(u32& numberCycles, Memory& memory);
    
    Word _programCounter;
    Word _stackPointer;

    Byte _registerA;
    Byte _registerX;
    Byte _registerY;

    Flag _carryFlag = Flag::ENABLED;
    Flag _zeroFlag = Flag::ENABLED;
    Flag _interruptionDisableFlag = Flag::ENABLED;
    Flag _decimalModeFlag = Flag::ENABLED;
    Flag _breakCommandFlag = Flag::ENABLED;
    Flag _overflowFlag = Flag::ENABLED;
    Flag _negativeFlag = Flag::ENABLED;

};

#endif
