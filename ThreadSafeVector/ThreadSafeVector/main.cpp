// ThreadSafeVector.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <thread>
#include "SafeVector.h"


SafeVector<int> concVector;

void addItem(int _item) {
	for (size_t i = 0; i < 1000; i++)
	{
		concVector.add(_item);
	}
}


int main()
{
	std::thread oneThread(addItem, 53);
	std::thread twoThread(addItem, 66);

	oneThread.join();
	twoThread.join();

	concVector.testThreading();		//I'm not sure if this tests the threading right
	std::cout << concVector.get(2);
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
