#include "pankkitili.h"

using namespace std;

Pankkitili::Pankkitili(string) {}

Pankkitili::~Pankkitili()
{

}

double Pankkitili::getBalance()
{
    //cout<<"getBalance saldo on "<<saldo<<endl;
    return saldo;
}

bool Pankkitili::withdraw(double summa)
{
   //cout<< "ennen saldo= "<<saldo<<" summa= "<<summa<<endl;


   //cout<<"sinun saldo on "<<saldo<<endl;
   //cout<<"haluat nosta "<<summa<<endl;

    if (summa <0)
        {
       cout<<" nosto ei onnistunut, summa on negatiivinen"<<endl;
            return false;
        }

//pankkitilin saldo ei saa menna negatiiviseksi, ei voi nostaa enemman kun on raha
    //jos summa on isompi kuin saldo
    //palautetaan false

        if (summa > saldo)
        {
            cout<<"nosto ei onnistunut, summa on isompi kuin saldo"<<endl;
            return false;
        }
//nama jasenfunktiot palauttaa true/false sen mukaan onnistui nosto/talletus
    //paivitetaan saldo:saldosta vahennetaan summa
    //palautetaan true

        else{
            cout<<"olet nostanut "<<summa<<endl;
            //cout<<"sinun saldo on nyt "<< saldo-summa<<endl;
            saldo-=summa;
            return true;
        }
}

bool Pankkitili::deposit(double summa)
{
    //cout<<"sinun saldo on "<<saldo<<endl;
   // cout<<"haluat tallentaa "<<summa<<endl;

    if (summa <0)
    {
        cout<<" tallenus ei onnistunut, summa on negatiivinen"<<endl;
        return false;
    }
    else{
        cout<<"olet talennatnut "<<summa<<endl;
        //cout<<"sinun saldo on nyt "<<saldo+summa<<endl;
        saldo+=summa;
        return true;
    }
}
