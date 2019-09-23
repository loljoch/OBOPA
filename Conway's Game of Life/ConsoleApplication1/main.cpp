// main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "grid.h"
#include "NormalBehaviourSet.h"

AbstractBehaviour *currentBehaviour() 
{
	return new NormalBehaviourSet();
}

int main()
{
	AbstractBehaviour *behaviour = currentBehaviour();

	Grid* grid = new Grid(25, 25);

	grid->coutGrid();


	//for (auto &p : grid->grid)
	//{
	//	p.second.willBeDead = behaviour->amIAlive(AbstractBehaviour::All, p.second.neighBouringCells);
	//}

	//grid->updateGrid();

	//grid->coutGrid();
	
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