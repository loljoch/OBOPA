#include "pch.h"
#include "NormalBehaviourSet.h"


NormalBehaviourSet::NormalBehaviourSet()
{
}


bool NormalBehaviourSet::amIAlive(rulebook _rule, std::vector<Cell*> _cells, bool _dead)
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
		if ((_numberOfAliveCells < 2 || _numberOfAliveCells > 3) && !_dead)
		{
			return false;
		}
		break;
	case AbstractBehaviour::Rule2:
		if ((_numberOfAliveCells == 2 || _numberOfAliveCells == 3) && !_dead)
		{
			return true;
		}
		break;
	case AbstractBehaviour::Rule3:
		if (_numberOfAliveCells == 3 && _dead)
		{
			return true;
		}
		break;
	case AbstractBehaviour::Rule4:
		break;
	case AbstractBehaviour::All:
		if ((_numberOfAliveCells < 2 || _numberOfAliveCells > 3))
		{
			return false;
		} else if ((_numberOfAliveCells == 2 || _numberOfAliveCells == 3))
		{
			return true;
		} else if (_numberOfAliveCells == 3)
		{
			return true;
		}
		break;
	default:
		break;
	}
}


NormalBehaviourSet::~NormalBehaviourSet()
{
}

