#pragma once
#include "Ucet.h"

class PartnerUcet : public Ucet
{

private:
	Klient* partner;

public:
	PartnerUcet(int c, Klient* k, Klient* p);
	PartnerUcet(int c, Klient* k, Klient* p, double ir);
	~PartnerUcet();
	Klient* GetPartner();

};