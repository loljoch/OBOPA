#pragma once

#include "Transactie.h"
#include <iostream>
#include <vector>


class Bankrekening
{
public:
	Bankrekening();
	virtual ~Bankrekening();

	Bankrekening operator +(const Transactie& _transactie) const;

	Bankrekening operator +=(const Transactie& _transactie);

	friend std::ostream& operator<<(std::ostream& os, const Bankrekening& _bankrekening);

private:
	float saldo = 0;
	std::vector<Transactie> transactieHistorie;
};

