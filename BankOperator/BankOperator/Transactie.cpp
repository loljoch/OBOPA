#include "pch.h"
#include "Transactie.h"


Transactie::Transactie(float _amount, std::array<int, 3> _date)
{
	amount = _amount;
	date = _date;
}

Transactie::~Transactie()
{
}

void Transactie::printTransactie() const
{
	std::cout << "-----------------------------------------------------------\n";
	if (amount < 0) {
		std::cout << "Bedrag: " << amount << " $" << std::endl;
	}
	else {
		std::cout << "Bedrag: +" << amount << " $" << std::endl;
	}
	std::cout << "Date: " << date[0] << " / " << date[1] << " / " << date[2] << std::endl;
	std::cout << "-----------------------------------------------------------\n";
}
