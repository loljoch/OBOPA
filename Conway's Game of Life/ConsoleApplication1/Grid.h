#pragma once
#include <map>
#include <tuple>
#include "Cell.h"

class Grid
{

public:
	Grid(int xSize, int ySize);
	virtual ~Grid();

	void coutGrid();
	void updateGrid();

public:
	std::map<std::tuple<int, int>, Cell> grid;
	int gridSize[2];
};

