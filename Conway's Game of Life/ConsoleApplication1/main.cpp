// main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "grid.h"
#include "NormalBehaviourSet.h"
#include "ElevatorBehaviourSet.h"
#include "RandomBehaviourSet.h"
#include <Windows.h>

AbstractBehaviour *currentBehaviour() 
{
	return new RandomBehaviourSet();
}

int main()
{
	
	AbstractBehaviour *behaviour = currentBehaviour();

	Grid* grid = new Grid(25, 25);
	grid->giveNeighbouringCells();

	grid->grid[std::make_tuple(12, 10)]->isDead = true;
	grid->grid[std::make_tuple(12, 11)]->isDead = true;
	grid->grid[std::make_tuple(12, 12)]->isDead = true;
	grid->grid[std::make_tuple(12, 13)]->isDead = true;
	grid->grid[std::make_tuple(12, 14)]->isDead = true;
	grid->grid[std::make_tuple(12, 15)]->isDead = true;
	grid->grid[std::make_tuple(10, 12)]->isDead = true;
	grid->grid[std::make_tuple(11, 12)]->isDead = true;
	grid->grid[std::make_tuple(12, 12)]->isDead = true;
	grid->grid[std::make_tuple(13, 12)]->isDead = true;
	grid->grid[std::make_tuple(14, 12)]->isDead = true;
	grid->grid[std::make_tuple(15, 12)]->isDead = true;
	grid->grid[std::make_tuple(11, 12)]->isDead = true;
	grid->grid[std::make_tuple(11, 13)]->isDead = true;
	grid->grid[std::make_tuple(11, 14)]->isDead = true;
	grid->grid[std::make_tuple(11, 15)]->isDead = true;
	grid->grid[std::make_tuple(11, 16)]->isDead = true;
	grid->grid[std::make_tuple(11, 11)]->isDead = true;

	grid->coutGrid();

	Sleep(2000);
	char currentCin = 'a';
	do
	{
		grid->calculateBehaviour(behaviour);
		grid->updateGrid();
		grid->coutGrid();
		//Sleep(100);
		std::cin >> currentCin;
	} while (currentCin != 'q'/*true*/);
	
	
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
