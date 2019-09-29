#pragma once
#include "NPC.h"


class OrcNPC :
	public NPC
{
public:
	OrcNPC(std::string _name);
	virtual ~OrcNPC();

	// Inherited via NPC
	virtual void render() const override;
};

