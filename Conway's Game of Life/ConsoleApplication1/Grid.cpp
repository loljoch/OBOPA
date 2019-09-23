#include "pch.h"
#include "Grid.h"
#include <iostream>
#include <vector>


Grid::Grid(int xSize, int ySize)
{
	gridSize[0] = xSize;
	gridSize[1] = ySize;

	auto i = grid.rbegin();

	for (size_t x = 0; x < xSize; x++)
	{
		for (size_t y = 0; y < ySize; y++)
		{
			grid[std::make_tuple(x, y)] = Cell();
		}
	}

	for (size_t x = 0; x < xSize; x++)
	{
		for (size_t y = 0; y < ySize; y++)
		{
			//Calculates the cells around the current cell
			std::vector<Cell> cells = { 
			grid[std::make_tuple(x+1, y)], 
			grid[std::make_tuple(x+1, y-1)], 
			grid[std::make_tuple(x, y-1)], 
			grid[std::make_tuple(x-1, y-1)], 
			grid[std::make_tuple(x-1, y)], 
			grid[std::make_tuple(x-1, y+1)],
			grid[std::make_tuple(x, y+1)], 
			grid[std::make_tuple(x+1, y+1)], };

			grid[std::make_tuple(x, y)].neighBouringCells = cells;
		}
	}
}

void Grid::coutGrid() 
{
	for (size_t y = 0; y < gridSize[1]; y++)
	{
		for (size_t x = 0; x < gridSize[0]; x++)
		{
			if (grid[std::make_tuple(x, y)].isDead)
			{
				std::cout << " X ";
			} else {
				std::cout << " O ";
			}
		}

		std::cout << std::endl;
	}

}

void Grid::updateGrid()
{
	for (auto &p : grid)
	{
		p.second.isDead = p.second.willBeDead;
	}
}


Grid::~Grid()
{
}
