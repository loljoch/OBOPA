#pragma once
#include <array>
#include <iostream>

class Transactie
{
public:
	Transactie(float _amount, std::array<int, 3> _date);
	~Transactie();

	void printTransactie() const;

public:
	float amount;
	std::array<int, 3> date;
};

