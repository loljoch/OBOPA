#pragma once
#include "Decorator.h"

class ShamanDecorator :
	public Decorator
{
public:
	ShamanDecorator(NPC* npc);
	virtual ~ShamanDecorator();

	// Inherited via Decorator
	virtual void render() const override;
};

