#pragma once
#include <stdio.h>

#define STACKSIZE  1310720 // 5MB 


class VM_Core
{
private:
	int * CodeArea;
	int StackArea[STACKSIZE];
	int PC = 0;
public:
	void ProcessInstruction(int *, int *, int);
protected:
	enum  InstructionEnum;
	struct Instruction;

};

