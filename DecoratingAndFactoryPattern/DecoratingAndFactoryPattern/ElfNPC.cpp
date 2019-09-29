#include "pch.h"
#include "ElfNPC.h"



ElfNPC::ElfNPC(std::string _name)
{
	name = _name;
}


ElfNPC::~ElfNPC()
{
}

void ElfNPC::render() const
{
	std::cout << "Hello, my name is " << this->name << " I'm an elf and my roles are " << std::endl;
}
