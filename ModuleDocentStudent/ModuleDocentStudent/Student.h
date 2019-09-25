#pragma once

#include <string>
#include <vector>
#include "Module.h"

class Student
{
public:
	Student(std::string _name);
	virtual ~Student();

	int getCurrentEC();

	void volgModule(Module* _moduleNaam);

	void laatModuleVallen(Module* _moduleNaam);

public:
	std::string name;
	int currentEC = 0;
	std::vector<Module*> moduleVolgend;
	

};

