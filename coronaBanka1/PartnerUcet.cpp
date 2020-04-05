#include "PartnerUcet.h"

PartnerUcet::PartnerUcet(int c, Klient* k, Klient* p) : Ucet(c,k)
{
	this->partner = p;
}

PartnerUcet::PartnerUcet(int c, Klient* k, Klient* p, double ir) : Ucet(c, k, ir)
{
	this->partner = p;
}

PartnerUcet::~PartnerUcet()
{
	delete& partner;
}

Klient* PartnerUcet::GetPartner()
{
	return this->partner;
}
