#include "asiakas.h"



asiakas::asiakas(string nimi, double lr)
    :kayttotili(nimi), luottotili(nimi, lr), nimi(nimi)
{
    cout<<"Pankkitili luottu "<<nimi<<"ille"<<endl;
    cout<<"sinun luottoraja on "<<lr<<endl;
    cout<<"tilin saldo on ";ShowSaldo();cout<<endl;
}

bool asiakas::talletus(double summa)
{
    cout<<"Talletus tilille kayttajalta "<<nimi<<endl;
    bool ret = kayttotili.deposit(summa);

    if(ret==false)
    {
        cout<<"Talletus ei onnistunut"<<endl;
        return false;

}else {
        cout<<"Talletus kayttajalta "<<nimi<<endl;
        cout<<"on onnistunut"<<endl;

        cout<<"Sinun tilille tallenettu "<<summa<<endl;
        cout<<"Tilin saldo on nyt ";ShowSaldo();cout<<endl;

     return ret;

}
}


bool asiakas::nosto(double summa)
{
    cout<<"Nosto tililta kayttajalta "<<nimi<<endl;
    bool ret = kayttotili.withdraw(summa);

    if(ret==false)
    {
        cout<<"Nosto ei onnistunut"<<endl;

    }else{

        cout<<"Nosto kayttajalta "<<nimi<<endl;
        cout<<"on onnistunut"<<endl;

        cout<<"Sinun tililta on nostettu "<<summa<<endl;
        cout<<"Tilin saldo on nyt ";ShowSaldo();cout<<endl;

    }
        return ret;

 }


bool asiakas::luotonMaksu(double summa)
{
    cout<<"Maksu luottotili kayttajalta "<<nimi<<endl;
    bool ret = luottotili.deposit(summa);

    if(ret==false)
    {
        cout<<"Maksu ei onnistunut"<<endl;


    }else {
        cout<<"Maksu luottotililla on onnistunut"<<endl;
    }
        return ret;
    }

bool asiakas::luotonNosto(double summa)
{
    cout<<"Nosto luottotilitlta kayttajalta "<<nimi<<endl;
    bool ret = luottotili.withdraw(summa);

    if(ret==false)
    {
        cout<<"Nosto ei onnistunut"<<endl;
    }else{

        cout<<"Nosto luottotililta ei onnistunut"<<endl;

    }
    return ret;

}


bool asiakas::tilisiirto(double summa, asiakas &saaja)
{
    cout<<"Tilisiirto kayttajalta "<<nimi<<endl;

    bool onnistuu=kayttotili.deposit(summa);
    if(onnistuu==false)
    {
        cout<<"Ei onnistuu"<<endl;
        return false;

    }else{

        cout<<"Siirto kayttajalta "<<nimi<<endl;

        saaja.talletus(summa);
        return true;
    }

    }

void asiakas::ShowSaldo()
    {
    cout<<"kayttotilin saldo "<<kayttotili.getBalance()<<endl;
        cout<<luottotili.getBalance()<<endl;
        cout<<"luottotilin saldo "<<luottotili.getBalance()<<endl;
    }

    string asiakas::getName()
    {
        return nimi;
    }
