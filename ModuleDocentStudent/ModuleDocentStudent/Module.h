#pragma once

#include <string>
#include <vector>
#include "Docent.h"
#include <iostream>

class Student; // forward declaration

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

