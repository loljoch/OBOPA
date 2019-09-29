#pragma once
#include "NPC.h"


class ElfNPC :
	public NPC
{
public:
	ElfNPC(std::string _name);
	virtual ~ElfNPC();

	// Inherited via NPC
	virtual void render() const override;
};

