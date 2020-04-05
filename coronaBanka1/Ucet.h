#pragma once
#include "Klient.h"

class Ucet {
private:
	int cislo;
	double stav;
	double interestRate;
	Klient* vlastnik;
	Klient* partner;

public:
	Ucet(int c, Klient* k);
	Ucet(int c, Klient* k, double ir);
	~Ucet();
	int GetCislo();
	double GetStav();
	double GetInterestRate();
	Klient* GetVlastnik();
	bool vyberPossible(double a);
	
	void Vklad(double a);
	bool Vyber(double a);
	void AddInterest();
};