#include "Klient.h"

int Klient::objectsCount = 0;

int Klient::GetObjectsCount()
{
	return Klient::objectsCount;
}

Klient::Klient(int k, string m)
{
	this->kod = k;
	this->meno = m;
	Klient::objectsCount += 1;

}
Klient::~Klient()
{
	delete &kod;
	delete &meno;
	Klient::objectsCount -= 1;
}
int Klient::GetKod()
{
	return this->kod;
}

string Klient::GetMeno()
{
	return this->meno;
}
