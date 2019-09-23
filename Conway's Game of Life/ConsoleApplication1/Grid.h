#pragma once
#include <vector>
#include "Cell.h"

class Grid
{

public:
	Grid(int xSize, int ySize);
	virtual ~Grid();

	void coutGrid();

public:
	std::vector<Cell> grid;
	Vector2 gridSize;
};

