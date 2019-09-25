#include "pch.h"
#include "RandomBehaviourSet.h"
#include <time.h>


RandomBehaviourSet::RandomBehaviourSet()
{
}


RandomBehaviourSet::~RandomBehaviourSet()
{
}

bool RandomBehaviourSet::amIAlive(rulebook _rule, std::vector<Cell*> _cells, bool _dead)
{
	int randomNumber = std::rand() % 2;
	if (randomNumber == 1) {
		return true;
	}
	else {
		return false;
	}
}
