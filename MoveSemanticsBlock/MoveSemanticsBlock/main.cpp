// MoveSemanticsBlock.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
#include "Block.h"

Block makeBlock(int size, std::string name) {
	std::cout << "begin makeBlock: " << std::endl;
	Block newBlock = Block(size, name);
	std::cout << "einde makeBlock: " << newBlock << std::endl;
	return newBlock;
}

int main() {
	std::cout << "------" << std::endl;

	Block block1(1024, "block1");
	std::cout << block1 << std::endl;

	std::cout << "------" << std::endl;

	std::cout << "voor makeBlock" << std::endl;
	Block block2 = makeBlock(2048, "block2");
	std::cout << "na makeBlock" << std::endl;
	std::cout << block2 << std::endl;

	std::cout << "------" << std::endl;

	Block block3(512, "block3");
	block3 = makeBlock(768, "block3");
	std::cout << block3 << std::endl;

	std::cout << "------" << std::endl;

	// gebruik de assignment-oper
	block3 = block2;
	std::cout << block3 << std::endl;

	std::cout << "------" << std::endl;

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
