#pragma once
#include "AbstractBehaviour.h"
class ElevatorBehaviourSet : public AbstractBehaviour
{
public:
	ElevatorBehaviourSet();
	virtual ~ElevatorBehaviourSet();

	bool amIAlive(rulebook _rule, std::vector<Cell*> _cells, bool _dead) override;
};

