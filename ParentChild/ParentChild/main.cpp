// ParentChild.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"

#include <iostream>
#include <memory>
#include <string>
#include "Parent.h"

int main() {

	std::shared_ptr<Parent> sharedParent = std::make_shared<Parent>("SharedParent");

	std::shared_ptr<Parent> sP2 = sharedParent;
	std::shared_ptr<Parent> sP3 = sharedParent;
	std::shared_ptr<Parent> sP4 = sharedParent;
	std::shared_ptr<Parent> sP5 = sharedParent;

	std::cout << "Use count: " << sharedParent.use_count() << std::endl;

	sP4->removeChild();
	std::cout << "Child count: " << sP3->childCount() << std::endl;

	//Parent* p1 = new Parent("Parent1");
	//std::cout << "p1:" << *p1 << std::endl;

	//Parent* p2 = new Parent(*p1); // roept de copy constructor aan
	//std::cout << "p2:" << *p2 << std::endl;

	//Parent* p3 = new Parent("Parent3");
	//std::cout << "p3:" << *p3 << std::endl;

	//*p3 = *p1; // roept de assignment operator aan
	//std::cout << "p1:" << *p3 << std::endl;

	//delete p1;
	//delete p2;
	//delete p3;

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
