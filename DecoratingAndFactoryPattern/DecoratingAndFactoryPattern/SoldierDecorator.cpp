#include "pch.h"
#include "SoldierDecorator.h"


SoldierDecorator::SoldierDecorator(NPC * npc): Decorator(npc)
{
}

SoldierDecorator::~SoldierDecorator()
{
}

void SoldierDecorator::render() const
{
	Decorator::render();
	std::cout << "Soldier";
}
