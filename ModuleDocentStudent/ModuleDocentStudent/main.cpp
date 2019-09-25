// ModuleDocentStudent.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

#include "Module.h"
#include "Docent.h"
#include "Student.h"
#include <time.h>
#include <windows.h>


int main()
{
	//Modules
	Module* moduleArr[3] = { 
		new Module("OBOPA", 2), 
		new Module("OBOPB", 2),
		new Module("Kook cursus", 18) };
	//Module* OBOPA = new Module("OBOPA", 2);
	//Module* OBOPB = new Module("OBOPB", 2);
	//Module* kookCursus = new Module("kookCursus", 18);

	//Alle studenten
	Student* studentArr[10] = {
		new Student("Johan"), 
		new Student("James"), 
		new Student("Jonas"), 
		new Student("Jezus"), 
		new Student("Jochem"), 
		new Student("Jan"), 
		new Student("Job"), 
		new Student("Juul"), 
		new Student("Jasper"),
		new Student("Joris"), };

	//Alle docenten
	Docent* docentArr[3] = {
		new Docent("Kwik"), 
		new Docent("Kwek"),
		new Docent("Kwak"),
	};

	//Docenten worden in modules geplaatst
	for (size_t i = 0; i < 3; i++)
	{
		moduleArr[i]->docent = docentArr[i];
	}

	std::srand(time(0));

	//Studenten joinen modules behalve de eerste student, want die voegen we bij alles
	for (size_t i = 1; i < 10; i++)
	{
		int randomNumber = std::rand() % 3 + 1;

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
			std::cout << "Module loos\n";
			break;
		}

		
	}

	//Eerste student voegen we bij alles, zodat we hem kunnen verwijderen met zekerheid
	studentArr[0]->volgModule(moduleArr[0]);
	studentArr[0]->volgModule(moduleArr[1]);
	studentArr[0]->volgModule(moduleArr[2]);

	for (size_t i = 0; i < 3; i++)
	{
		Sleep(3000);
		moduleArr[i]->printModule();
	}

	Sleep(4000);
	std::cout << "\n\n\n\n" << moduleArr[0]->name << " EC wordt gewijzigd van " << moduleArr[0]->worthEC << " EC naar " << moduleArr[0]->worthEC-1 << " EC, omdat studenten het teveel punten vonden voor zo'n klein vak!!!" << std::endl;
	std::cout << "Hierbij de nieuwe module indelingen met punten" << std::endl;
	moduleArr[0]->worthEC -= 1;
	Sleep(2000);


	for (size_t i = 0; i < 3; i++)
	{
		Sleep(3000);
		moduleArr[i]->printModule();
	}

	Sleep(4000);
	std::cout << "\n\n\n\n" << "We horen net een bericht, dat " << studentArr[0]->name << " niet meer de module " << moduleArr[0]->name << " zal volgen komend jaar, dus hierbij nogmaal de nieuwe indelingen" << std::endl;
	studentArr[0]->laatModuleVallen(moduleArr[0]);
	Sleep(2000);

	for (size_t i = 0; i < 3; i++)
	{
		Sleep(3000);
		moduleArr[i]->printModule();
	}

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
