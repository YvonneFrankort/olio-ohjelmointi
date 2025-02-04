#include <iostream>
#include<string>
#include<iostream>
#include"pankkitili.h"
#include"luottotili.h"
#include"asiakas.h"

using namespace std;

int main()
{
   // Pankkitili pa("Gordon");

    //pa.withdraw(50);
    //pa.deposit(100);
   // pa.getBalance();

   /*
    Luottotili hups("o", 1000);
    hups.withdraw(10);
    hups.deposit(20);
    hups.getBalance();
    */

    asiakas A("Hans", 1000);
    asiakas B("Gunther", 1000);


    A.talletus(500);
    A.nosto(30);
    A.tilisiirto(50, B);
    B.tilisiirto(70, A);

    A.ShowSaldo();
    B.ShowSaldo();

    //A.tilisiirto(50,B);//tilinsiirto Alta Blle
    //B.tilisiirto(100,C);



    return 0;
}
