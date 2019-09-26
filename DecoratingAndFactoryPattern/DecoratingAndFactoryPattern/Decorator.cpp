#include "pch.h"
#include "Decorator.h"



Decorator::Decorator(NPC* npc)
{
	npc = npc;
}

void Decorator::render() const
{
	npc->render();
}
