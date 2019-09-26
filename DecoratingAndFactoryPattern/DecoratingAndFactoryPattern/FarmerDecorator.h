#pragma once
#include "Decorator.h"


class FarmerDecorator :
	public Decorator
{
public:
	FarmerDecorator(NPC* npc);
	virtual ~FarmerDecorator();

	// Inherited via Decorator
	virtual void render() const override;
};

