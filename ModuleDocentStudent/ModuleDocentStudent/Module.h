#pragma once

#include <string>
#include <vector>
#include "Docent.h"
#include "Student.h"
#include <iostream>

class Module
{
public:
	Module(std::string _name, int _worthEC);
	virtual ~Module();

	void printModule();

public:
	std::string name;
	int worthEC;

	Docent* docent;
	std::vector<Student*> students;
	
};

