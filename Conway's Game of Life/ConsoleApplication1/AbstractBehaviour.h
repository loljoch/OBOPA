#pragma once
#include <vector>
#include "Cell.h"

class AbstractBehaviour
{
public:
	static enum rulebook {
		Rule1,
		Rule2,
		Rule3,
		Rule4,
		All
	};

public:
	AbstractBehaviour();
	virtual ~AbstractBehaviour();

	virtual bool amIAlive(rulebook _rule, std::vector<Cell> _cells) =0;
};

