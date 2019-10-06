// ArraySort.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <algorithm>
#include <string>

template <typename T>
void sortArray(T _array[], int _size) {
	std::sort(_array, _array + _size);
}

//works only for the first 10 of an array
std::ostream & operator<<(std::ostream & os, const float _array[]) {

	for (size_t i = 0; i < 10; i++)
	{
		os << _array[i] << " ";
	}

	os << std::endl;

	return os;
}

//works only for the first 10 of an array
std::ostream & operator<<(std::ostream & os, const std::string _array[]) {

	for (size_t i = 0; i < 10; i++)
	{
			os << _array[i] << " ";
	}

	os << std::endl;

	return os;
}

int main()
{
	float floatArray[10] = {2, 5, 66, 3, 7, 1, 8, 9, 10, 83};
	std::cout << floatArray;
	sortArray(floatArray, 10);
	std::cout << floatArray;

	std::string stringArray[10] = { 
	"ad"
	, "ap"
	, "ac"
	, "aj"
	, "ai"
	, "au"
	, "ag"
	, "ah"
	, "ab" };

	std::cout << stringArray;
	sortArray(stringArray, 10);
	std::cout << stringArray;
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
