// ModuleDocentStudent.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

#include "Module.h"
#include "Docent.h"
#include "Student.h"
#include <time.h>


int main()
{
	Module* moduleArr[3] = { 
		new Module("OBOPA", 2), 
		new Module("OBOPB", 2),
		new Module("kookCursus", 18) };
	//Module* OBOPA = new Module("OBOPA", 2);
	//Module* OBOPB = new Module("OBOPB", 2);
	//Module* kookCursus = new Module("kookCursus", 18);

	Student* studentArr[10] = {
		new Student("Johan"), 
		new Student("James"), 
		new Student("Jonas"), 
		new Student("Jezus"), 
		new Student("Jochem"), 
		new Student("Jan"), 
		new Student("Jan-willem"), 
		new Student("Juul"), 
		new Student("Jasper"), };

	Docent* docentArr[3] = {
		new Docent("Kwik"), 
		new Docent("Kwek"),
		new Docent("Kwak"),
	};

	for (size_t i = 0; i < 3; i++)
	{
		moduleArr[i]->docent = docentArr[i];
	}

	for (size_t i = 0; i < 10; i++)
	{
		std::srand(time(0));
		int randomNumber = std::rand() % 3;

		switch (randomNumber)
		{
		case 1:
			studentArr[i]->volgModule(moduleArr[0]);
			break;
		case 2:
			studentArr[i]->volgModule(moduleArr[0]);
			studentArr[i]->volgModule(moduleArr[1]);

			break;
		case 3:
			studentArr[i]->volgModule(moduleArr[0]);
			studentArr[i]->volgModule(moduleArr[1]);
			studentArr[i]->volgModule(moduleArr[2]);

			break;
		default:
			break;
		}

		
	}



	moduleArr[0]->printModule();
	moduleArr[1]->printModule();
	moduleArr[2]->printModule();


	delete moduleArr;
	delete studentArr;
	delete docentArr;
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
