#pragma once

#include <string>

class Docent
{
public:
	Docent(std::string _name);
	virtual ~Docent();

public:
	std::string name;
};

