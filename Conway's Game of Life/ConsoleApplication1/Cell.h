#pragma once

#include <vector>

class Cell
{
public:
	Cell();
	~Cell();

	void setNeighbouringCells(std::vector<Cell*>);

public:
	bool isDead ;
	bool willBeDead;
	std::vector<Cell*> neighBouringCells;
};

