#pragma once

#include <vector>

class Cell
{
public:
	Cell();
	~Cell();

public:
	bool isDead;
	bool willBeDead = false;
	std::vector<Cell> neighBouringCells;
};

