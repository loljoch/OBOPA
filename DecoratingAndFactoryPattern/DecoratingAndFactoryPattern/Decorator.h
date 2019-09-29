#pragma once
#include "NPC.h"
class Decorator : public NPC
{
public:

	Decorator(NPC* _npc);

	virtual ~Decorator();

	// Inherited via NPC
	virtual void render() const override;

private:
	NPC* npc;
};

