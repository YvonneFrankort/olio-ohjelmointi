#include "luottotili.h"
#include<iostream>
using namespace std;


Luottotili::Luottotili(string o, double lr)
    :Pankkitili(o)

{
luottoRaja = lr;
cout<<"luottoraja= "<<luottoRaja<<endl;
}

Luottotili::~Luottotili()
{

}

double Luottotili::getBalance()
{
    //cout<<"getBalance saldo on "<<luottoRaja<<endl;
    return luottoRaja;
}


bool Luottotili::withdraw(double summa)
{
    //cout<<"haluat nostaa "<<summa<<endl;
   // cout<<"sinun saldo on "<<saldo<<endl;

    //negatiivisia nostoja/maksuja ei voi tehda
        //jos summa < 0
        //palauta false

    if(summa < 0){
        cout<<"et voi nosta enemman rahaa kun saldossa"<<endl;
        return false;
    }

    //luottotilin saldo saa menna negatiiviseksi
        //luottoraja 1000
        //velka eli saldo 800
        //summa on 300
        //800+300 >1000
        //jos saldo=summa >luottoraja
        //palauta false
        //muutoin
        //lisataan saldoon summa
        //palauta true

    if(saldo+summa > luottoRaja)
    {
       cout<<"summa on "<< summa<<" +"<< "saldo on "<<saldo<<"isompi kun luottoraja"<<endl;
        cout<<"et voi nosta enemman rahaa kun luottoraja"<<endl;
    return false;

    }else{
        cout<<"tallennettu summa "<<summa<<endl;
        cout<<"uusi saldo on "<<saldo+summa<<endl;
        saldo=saldo+summa;
        return true;
    }
}
bool Luottotili::deposit(double summa)
{
    //cout<<"sinun velka on "<<saldo<<endl;
    //cout<<"haluat tallentaa "<<summa<<endl;

    if(summa<0)
    {
        cout<<"et voi tallentaa negatiivista summa "<<endl;
        return false;
}
    if(saldo-summa <0)
{
    cout<<"raha ei riittaa. Sinun saldo on "<<saldo<<endl;
    return false;
    }
    else{
        cout<<"lisatty summa "<<summa<<endl;
        cout<<"saldo nyt "<<saldo+summa<<endl;
        saldo+=summa;
        return true;
    }
}
