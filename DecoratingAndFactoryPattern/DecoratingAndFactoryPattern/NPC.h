#pragma once
#include <string>
#include <iostream>


class NPC
{
public:
	NPC();
	virtual ~NPC();

	virtual void render() const =0;

public:
	std::string name;
};

