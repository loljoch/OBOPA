#include "pch.h"
#include "Student.h"


Student::Student(std::string _name)
{
	name = _name;
}

Student::~Student()
{
}

void Student::volgModule(Module * _moduleNaam)
{
	moduleVolgend.push_back(_moduleNaam);

	_moduleNaam->students.push_back(this);
}

void Student::laatModuleVallen(Module * _moduleNaam)
{
	auto it = std::find(moduleVolgend.begin(), moduleVolgend.end(), _moduleNaam);
	moduleVolgend.erase(it);

	auto ist = std::find(_moduleNaam->students.begin(), _moduleNaam->students.end(), this);
	_moduleNaam->students.erase(ist);
}
