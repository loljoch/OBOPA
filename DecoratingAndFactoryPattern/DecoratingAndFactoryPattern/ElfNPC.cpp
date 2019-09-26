#include "pch.h"
#include "ElfNPC.h"


ElfNPC::ElfNPC()
{
}


ElfNPC::~ElfNPC()
{
}

void ElfNPC::render() const
{
	std::cout << "Hello, my name is " << this->name << " I'm an elf";
}
