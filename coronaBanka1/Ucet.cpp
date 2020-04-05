#include "Ucet.h"



Ucet::Ucet(int c, Klient* k)
{
	this->cislo = c;
	this->vlastnik = k;
	this->interestRate = 1.2;
	this->stav = 0;
}

Ucet::Ucet(int c, Klient* k, double ir)
{
	this->cislo = c;
	this->vlastnik = k;
	this->interestRate = ir;
	this->stav = 0;
}
Ucet::~Ucet()
{
	delete& cislo;
	delete& vlastnik;
	delete& interestRate;
	delete& stav;
}
int Ucet::GetCislo()
{
	return this->cislo;
}

double Ucet::GetStav()
{
	return this->stav;
}

double Ucet::GetInterestRate()
{
	return this->interestRate;
}

Klient* Ucet::GetVlastnik()
{
	return this->vlastnik;
}


bool Ucet::vyberPossible(double a)
{
	return this->stav >= a;
}

void Ucet::Vklad(double a)
{
	this->stav += a;
}

bool Ucet::Vyber(double a)
{
	if (!this->vyberPossible(a)) {
		return false;
	}
	else
	{
		this->stav -= a;
		return true;
	}

}

void Ucet::AddInterest()
{
	this->stav *= this->interestRate;
}
