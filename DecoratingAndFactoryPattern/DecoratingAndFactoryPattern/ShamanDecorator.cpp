#include "pch.h"
#include "ShamanDecorator.h"




ShamanDecorator::ShamanDecorator(NPC * npc): Decorator(npc)
{
}

ShamanDecorator::~ShamanDecorator()
{
}

void ShamanDecorator::render() const
{
	Decorator::render();
	std::cout << "Shaman\n";
}
