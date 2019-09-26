#include "pch.h"
#include "Cell.h"


Cell::Cell()
{
	neighBouringCells.reserve(8);
	isDead = true;
	willBeDead = false;
}


Cell::~Cell()
{
}

void Cell::setNeighbouringCells(std::vector<Cell*> _cells)
{
	neighBouringCells = _cells;
}
