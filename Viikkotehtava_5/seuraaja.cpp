#include "seuraaja.h"


Seuraaja::Seuraaja(string n)
{
    nimi=n;
    cout<<"Luodaan seuraaja "<< n << endl;
}

string Seuraaja::getNimi() const
{
    return nimi;
}

void Seuraaja::paivitys(string viesti)
{
    cout<<nimi<<",sait uusi viesti: "<<viesti<<endl;
}
