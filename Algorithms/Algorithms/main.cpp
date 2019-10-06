// Algorithms.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"

#include <iostream>
#include <sstream>
#include <string>
#include <vector>

#include <algorithm>
#include <functional>


//this didn't work as expected :.(

/*int removeComma(double _int) {
	std::string intstring = std::to_string(_int);

	auto it = intstring.begin();

	while (it != intstring.end())
	{
		if (*it == '.') {
			intstring.erase(it);
			break;
		}

		it++;
	}

	std::stringstream streamedString(intstring);

	int integer = 0;
	streamedString >> integer;
	
	std::cout << integer << std::endl;
	return integer;

}*/


int main() {

	std::vector<std::string> colours{ "red", "green", "white", "blue", "orange", "green", "orange", "black", "purple" };
	// gebruik functies uit <algorithm> en <functional> om (steeds vanuit een ORIGINELE copie van deze vector)
	// 1) de vector in 2 nieuwe vectoren te splitsen: 1 met alles wat alfabetisch voor 'purple' komt, 1 met alles er na

	/*{
		std::sort(colours.begin(), colours.end());
		std::vector<std::string> beforePurple;
		std::vector<std::string> afterPurple;

		auto startIt = colours.begin();
		auto it = std::find(colours.begin(), colours.end(), "purple");

		//Adds all colors before purple
		while (startIt != it)
		{
			beforePurple.push_back(*startIt);
			startIt++;
		}

		startIt = colours.end();

		//Adds all color after purple
		while (it != startIt)
		{
			afterPurple.push_back(*it);
			it++;
		}

		for (auto it = beforePurple.begin(); it != beforePurple.end(); it++) {
			std::cout << *it << "  ";
		}

		std::cout << std::endl;

		for (auto it = afterPurple.begin(); it != afterPurple.end(); it++) {
			std::cout << *it << "  ";
		}

	}*/
	
	// 2) alle elementen UPPERCASE te maken.

	/*auto it = colours.begin();

	while (it != colours.end())
	{
		std::transform(it->begin(), it->end(), it->begin(), ::toupper);
		it++;
	}

	for (auto it = colours.begin(); it != colours.end(); it++) {
		std::cout << *it << "  ";
	}*/

	// 3) alle dubbele te verwijderen

	/*std::sort(colours.begin(), colours.end());		//Sorting seems like a quick fix
	auto it = std::unique(colours.begin(), colours.end());

	colours.resize(std::distance(colours.begin(), it));

	for (auto it = colours.begin(); it != colours.end(); it++) {
		std::cout << *it << "  ";
	}*/






	std::vector<double> numbers{ 10, 324422, 6, -23, 234.5, 654.1, 3.1242, -9.23, 635 };
	// gebruik functies uit <algorithm> en <functional> om (steeds vanuit een ORIGINELE copie van deze vector)
	// 1) alle negatieve elementen te verwijderen

	/*auto it = numbers.begin();

	while (it != numbers.end())
	{
		if (*it < 0) {
			numbers.erase(it);
			it = numbers.begin();
		}
		else {
			it++;
		}
	}

	for (auto it = numbers.begin(); it != numbers.end(); it++) {
		std::cout << *it << "   ";
	}*/

	// 2) voor alle elementen te bepalen of ze even of oneven zijn
	
	/*auto it = numbers.begin();

	while (it != numbers.end())
	{
		if (((int)*it) % 2 == 0) {
			std::cout << *it << " is even" << std::endl;
		}
		else {
			std::cout << *it << " is uneven" << std::endl;
		}
		it++;
	}*/

	// 3) de som, het gemiddelde, en het product van alle getallen te berekenen

	/*auto it = numbers.begin();

	double deSom = 0;

	while (it != numbers.end())
	{
		deSom += *it;
		it++;
	}

	double hetGemiddelde = deSom / numbers.size();

	double hetProduct = 1;

	it = numbers.begin();

	while (it != numbers.end())
	{
		hetProduct *= *it;
		it++;
	}

	std::cout << "De som is: " << deSom << std::endl << "Het gemiddelde is: " << hetGemiddelde << std::endl << "Het product is: " << hetProduct << std::endl;*/

	return 0;
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
