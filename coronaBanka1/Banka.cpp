#include "Banka.h"

Banka::Banka(int k)
{
	this->klienti = new Klient * [k];
	this->maxKlient = k;
	this->pocetKlient = 0;
	
	this->ucty = new Ucet * [k];
	this->maxUcty = k;
	this->pocetUcty = 0;
}

Banka::~Banka()
{
	delete[]klienti;
	delete[]ucty;
	delete &pocetKlient;
	delete &maxKlient;
	delete &maxUcty;
	delete &pocetUcty;
}

Klient* Banka::GetKlient(int k)
{
	for (int i = 0; i < this->pocetKlient; i++)
	{
		if (this->klienti[i]->GetKod() == k)
		{
			return this->klienti[i];
		}
		else
		{
			return nullptr;
		}
	}

}

Ucet* Banka::GetUcet(int c)
{
	for (int i = 0; i < this->pocetUcty; i++)
	{
		if (this->ucty[i]->GetCislo() == c)
		{
			return this->ucty[i];
		}
		else
		{

			return nullptr;
		}
	}


}

Klient* Banka::vytvorKlient(int k, string c)
{
	Klient* newklient = new Klient(k, c);
	this->klienti[this->pocetKlient] = newklient;
	this->pocetKlient++;
	return newklient;
}

Ucet* Banka::vytvorUcet(int c, Klient* k)
{
	Ucet* newucet = new Ucet(c, k);
	this->ucty[this->pocetUcty] = newucet;
	return newucet;
}

Ucet* Banka::vytvorUcet(int c, Klient* k, double ir)
{
	Ucet* newucet = new Ucet(c, k, ir);
	this->ucty[this->pocetUcty] = newucet;
	this->pocetUcty++;
	return newucet;
}

Ucet* Banka::vytvorUcet(int c, Klient* k, Klient* p)
{
	Ucet* newucet = new PartnerUcet(c, k, p);
	this->ucty[this->pocetUcty] = newucet;
	this->pocetUcty++;
	return newucet;
}

Ucet* Banka::vytvorUcet(int c, Klient* k, Klient* p, double ir)
{
	Ucet* newucet = new PartnerUcet(c, k, p, ir);
	this->ucty[this->pocetUcty] = newucet;
	this->pocetUcty++;
	return newucet;
}

void Banka::AddInterest()
{
	for (int i = 0; i < this->pocetUcty; i++)
	{
		this->ucty[i]->Vklad((this->ucty[i]->GetStav() / 100) * this->ucty[i]->GetInterestRate());
	}
}
