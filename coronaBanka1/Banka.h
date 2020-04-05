#pragma once
#include "Klient.h"
#include "Ucet.h"
#include "PartnerUcet.h"

class Banka {

private:
	Klient** klienti;
	int pocetKlient;
	int maxKlient;

	Ucet** ucty;
	int pocetUcty;
	int maxUcty;

public:
	Banka(int k);
	~Banka();

	Klient* GetKlient(int k);
	Ucet* GetUcet(int c);

	Klient* vytvorKlient(int k, string c);
	Ucet* vytvorUcet(int c, Klient* k);
	Ucet* vytvorUcet(int c, Klient* k, double ir);
	Ucet* vytvorUcet(int c, Klient* k, Klient* p);
	Ucet* vytvorUcet(int c, Klient* k, Klient* p, double ir);

	void AddInterest();

};