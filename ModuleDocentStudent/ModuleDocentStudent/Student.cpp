#include "pch.h"
#include "Student.h"


Student::Student(std::string _name)
{
	name = _name;
	moduleVolgend = std::vector<Module*>();
}

Student::~Student()
{
}

int Student::getCurrentEC()
{
	int _currentEC = 0;

	for (size_t i = 0; i < moduleVolgend.size(); i++)
	{
		_currentEC += moduleVolgend[i]->worthEC;
	}

	return _currentEC;
}

void Student::volgModule(Module* _moduleNaam)
{
	moduleVolgend.push_back(_moduleNaam);

	_moduleNaam->students.push_back(this);
}

void Student::laatModuleVallen(Module* _moduleNaam)
{
	auto it = std::find(moduleVolgend.begin(), moduleVolgend.end(), _moduleNaam);
	moduleVolgend.erase(it);

	auto ist = std::find(_moduleNaam->students.begin(), _moduleNaam->students.end(), this);
	_moduleNaam->students.erase(ist);
}
