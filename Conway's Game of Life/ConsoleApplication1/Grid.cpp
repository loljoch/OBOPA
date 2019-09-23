#include "pch.h"
#include "Grid.h"
#include <iostream>


Grid::Grid(int xSize, int ySize)
{
	gridSize.x = xSize;
	gridSize.y = ySize;

	grid = std::vector<Cell>();
	auto i = grid.end();

	for (size_t x = 0; x < xSize; x++)
	{
		for (size_t y = 0; y < ySize; y++)
		{
			Cell* cell = new Cell(x, y);
			grid.insert(grid.end(), *cell);
		}
	}
}

void Grid::coutGrid() 
{
	for (size_t i = 0; i < grid.size(); i++)
	{
		if (grid[i].isDead)
		{
			std::cout << " X ";
		}
		else {
			std::cout << " O ";
		}

		if (i % gridSize.x -1 == 0)
		{
			std::cout << std::endl;
		}
	}

}


Grid::~Grid()
{
}
