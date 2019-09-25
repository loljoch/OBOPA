#include "pch.h"
#include "Module.h"

#include "Student.h"



Module::Module(std::string _name, int _worthEC)
{
	name = _name;
	worthEC = _worthEC;
}

Module::~Module()
{
}

void Module::printModule()
{
	std::cout << "_________________________________________________________________________________" << std::endl;
	std::cout << std::endl << name << std::endl << "------------------------------------\n";

	if (docent != nullptr) {
		std::cout << "Wordt gegeven door " << docent->name;
	}
	else {
		std::cout << "Nog geen docent aanwezig";
	}

	std::cout << std::endl;

	std::cout << "EC: " << worthEC << "\n------------------------------------\n" << std::endl;

	std::cout << "Studenten die zich hebben opgegeven voor deze module\n" << "Namen" << "					" << "EC" << std::endl << std::endl;

	for (size_t i = 0; i < students.size(); i++)
	{
		std::cout << students[i]->name << "					" << students[i]->getCurrentEC() << std::endl;
	}

	std::cout << "_________________________________________________________________________________\n\n\n\n" << std::endl;
}
