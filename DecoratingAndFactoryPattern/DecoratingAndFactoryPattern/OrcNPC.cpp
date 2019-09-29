#include "pch.h"
#include "OrcNPC.h"


OrcNPC::OrcNPC(std::string _name)
{
	name = _name;
}


OrcNPC::~OrcNPC()
{
}

void OrcNPC::render() const
{
	std::cout << "Hello, my name is " << this->name << " I'm an elf";
}
