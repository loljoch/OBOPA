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
			grid[std::make_tuple(x, y)] = new Cell();
		}
	}


}

void Grid::giveNeighbouringCells() {
	for (size_t x = 0; x < gridSize[0]; x++)
	{
		for (size_t y = 0; y < gridSize[1]; y++)
		{
			std::vector<Cell*> cells = {
			grid[std::make_tuple(x + 1, y)],
			grid[std::make_tuple(x + 1, y - 1)],
			grid[std::make_tuple(x, y - 1)],
			grid[std::make_tuple(x - 1, y - 1)],
			grid[std::make_tuple(x - 1, y)],
			grid[std::make_tuple(x - 1, y + 1)],
			grid[std::make_tuple(x, y + 1)],
			grid[std::make_tuple(x + 1, y + 1)], };

			//Calculates the cells around the current cell
			/*if (grid.count(std::make_tuple(x - 1, y - 1)) > 0) {
				cells.insert(cells.begin(), grid[std::make_tuple(x - 1, y - 1)]);
			}*/
			
			grid[std::make_tuple(x, y)]->setNeighbouringCells(cells);
			
		}
	}
}

void Grid::coutGrid() 
{
	system("CLS");
	for (size_t y = 0; y < gridSize[1]; y++)
	{
		for (size_t x = 0; x < gridSize[0]; x++)
		{
			if (grid[std::make_tuple(x, y)]->isDead)
			{
				std::cout << " * ";
			} else if (grid[std::make_tuple(x, y)]->isDead == false){
				std::cout << " _ ";
			}
		}

		std::cout << std::endl;
	}

}

void Grid::updateGrid()
{
	for (size_t y = 0; y < gridSize[1]; y++)
	{
		for (size_t x = 0; x < gridSize[0]; x++)
		{
			grid[std::make_tuple(x, y)]->isDead = grid[std::make_tuple(x, y)]->willBeDead;
		}
	}
}

void Grid::calculateBehaviour(AbstractBehaviour* _behaviour)
{
	for (size_t y = 0; y < gridSize[1]; y++)
	{
		for (size_t x = 0; x < gridSize[0]; x++)
		{
			grid[std::make_tuple(x, y)]->willBeDead = !_behaviour->amIAlive(AbstractBehaviour::All, grid[std::make_tuple(x, y)]->neighBouringCells);
		}

		std::cout << std::endl;
	}
}


Grid::~Grid()
{
}
