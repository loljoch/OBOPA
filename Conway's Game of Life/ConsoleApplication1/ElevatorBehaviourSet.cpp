#include "pch.h"
#include "ElevatorBehaviourSet.h"


ElevatorBehaviourSet::ElevatorBehaviourSet()
{
}


ElevatorBehaviourSet::~ElevatorBehaviourSet()
{
}

bool ElevatorBehaviourSet::amIAlive(rulebook _rule, std::vector<Cell*> _cells, bool _dead)
{
	int _numberOfAliveCells = 0;

	for (size_t i = 0; i < _cells.size(); i++)
	{
		if (_cells[i] != nullptr)
		{
			if (!_cells[i]->isDead)
			{
				_numberOfAliveCells += 1;
			}
		}
	}

	switch (_rule)
	{
	case AbstractBehaviour::Rule1:
		if (_cells[2] != nullptr)
		{
			if (_cells[2]->isDead)
			{
				return true;
			}
		}
		break;
	case AbstractBehaviour::Rule2:
		if (_numberOfAliveCells < 3)
		{
			return false;
		}
		break;
	case AbstractBehaviour::Rule3:
		break;
	case AbstractBehaviour::Rule4:
		break;
	case AbstractBehaviour::All:
		if (_cells[2] != nullptr)
		{
			if (_cells[2]->isDead)
			{
				return true;
			}
		} else if (_numberOfAliveCells < 3)
		{
			return false;
		}
		break;
	default:
		break;
	}
}
