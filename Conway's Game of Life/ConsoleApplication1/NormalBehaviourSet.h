#pragma once
#include "AbstractBehaviour.h"


class NormalBehaviourSet : public AbstractBehaviour
{
public:
	NormalBehaviourSet();
	virtual ~NormalBehaviourSet();

	bool amIAlive(rulebook _rule, std::vector<Cell> _cells) override;
};

