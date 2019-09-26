#include "pch.h"
#include "FarmerDecorator.h"


FarmerDecorator::FarmerDecorator(NPC * npc) : Decorator(npc)
{
}

FarmerDecorator::~FarmerDecorator()
{
}

void FarmerDecorator::render() const
{
	Decorator::render();
	std::cout << "Farmer";
}
