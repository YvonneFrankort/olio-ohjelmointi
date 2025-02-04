#ifndef ASIAKAS_H
#define ASIAKAS_H
#include<iostream>
#include<string>

#include "pankkitili.h"
#include "luottotili.h"

using namespace std;

class asiakas
{
public:
    asiakas(string nimi, double lr);
    bool talletus(double summa);
    bool nosto(double summa);
    bool luotonMaksu(double summa);
    bool luotonNosto(double summa);
    bool tilisiirto(double summa, asiakas &saaja);
    void ShowSaldo();
    string getName();

private:
    Pankkitili kayttotili;
    Luottotili luottotili;
    string nimi;
};

#endif // ASIAKAS_H
