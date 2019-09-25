#pragma once
#include "AbstractBehaviour.h"
class RandomBehaviourSet :
	public AbstractBehaviour
{
public:
	RandomBehaviourSet();
	virtual ~RandomBehaviourSet();

	bool amIAlive(rulebook _rule, std::vector<Cell*> _cells, bool _dead) override;
};

