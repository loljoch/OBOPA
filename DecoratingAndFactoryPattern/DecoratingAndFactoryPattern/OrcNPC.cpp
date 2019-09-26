#include "pch.h"
#include "OrcNPC.h"


OrcNPC::OrcNPC()
{
}


OrcNPC::~OrcNPC()
{
}

void OrcNPC::render() const
{
	std::cout << "Hello, my name is " << this->name << " I'm an elf";
}
