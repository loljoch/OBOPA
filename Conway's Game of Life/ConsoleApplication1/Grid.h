#pragma once
#include <map>
#include <tuple>
#include "Cell.h"
#include "AbstractBehaviour.h"

class Grid
{

public:
	Grid(int xSize, int ySize);
	virtual ~Grid();

	void giveNeighbouringCells();
	void coutGrid();
	void updateGrid();

	void calculateBehaviour(AbstractBehaviour*);

public:
	std::map<std::tuple<int, int>, Cell*> grid;
	int gridSize[2];
};

