#include "VM_Core.h"


void VM_Core::ProcessInstruction(int * code, int * stack, int pc)
{

}

struct VM_Core::Instruction
{
	InstructionEnum instruction;
	int op1;
	int op2;
};

enum VM_Core::InstructionEnum
{
	NOP, LDI, LDIB, LDX, LDXB, LDA, LITI, STO, STOB, STX, STXB, OFFSET, MOD,
	ADDI, SUBI, MULI, DIVI, ADDF, SUBF, MULF, DIVF, EQLI, NEQI, LSSI, GEQI,
	GTRI, LEQI, EQLF, NEQF, LSSF, GEQF, GTRF, LEQF, AND, OR, NOT, CVTI, CVTF,
	JMP, JPC, JPCR, JPT, JPTR, INT, INCI, INCF, DECI, DECF, SWITCH, POP, MINUSI,
	MINUSF, CHK, RET, ADDR, SUP, CAL
};