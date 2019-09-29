#include "pch.h"
#include "Bankrekening.h"


Bankrekening::Bankrekening()
{
}


Bankrekening::~Bankrekening()
{
}

Bankrekening Bankrekening::operator+(const Transactie & _transactie) const
{
	Bankrekening bankrekening;
	return Bankrekening();
}

Bankrekening Bankrekening::operator+=(const Transactie & _transactie)
{
	saldo += _transactie.amount;
	transactieHistorie.push_back(_transactie);
	return *this;
}

std::ostream & operator<<(std::ostream & os, const Bankrekening & _bankrekening)
{
	os << "______________________________________________________________________________\n";
	os << "Saldo: " << _bankrekening.saldo << " $" << "\n\nTransacties: " << std::endl;

	if (_bankrekening.transactieHistorie.size() != 0) {
		for (size_t i = 0; i < _bankrekening.transactieHistorie.size(); i++)
		{
			_bankrekening.transactieHistorie[i].printTransactie();
		}
	}
	else {
		os << "Geen transacties zijn gemaakt op dit account\n";
	}
	os << "______________________________________________________________________________\n";
	return os;
}
