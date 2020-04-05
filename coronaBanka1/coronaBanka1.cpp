#include <iostream>
#include "Banka.h"
#include "Klient.h"
#include "Ucet.h"
using namespace std;


int main()
{
    Banka* banka = new Banka(5);
    banka->vytvorKlient(1, "Michal");
    Klient* klient = banka->GetKlient(1);
    Ucet* ucet = banka->vytvorUcet(1, klient);
    ucet->Vklad(69420);
    cout << ucet->GetStav() << endl;
    ucet->Vyber(70000);
    cout << ucet->GetStav() << endl;
    ucet->Vyber(69000);
    cout << ucet->GetStav() << endl;

}
