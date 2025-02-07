#include "notifikaattori.h"


Notifikaattori::Notifikaattori()
{
    cout<<"Luodaan notifikaattori"<<endl;
}

void Notifikaattori::lisaa(Seuraaja *uusiSeur)
{
    uusiSeur->next=seuraajat;
    seuraajat=uusiSeur;

    //lahtotilanne: seuraajat=b,
        //pitaa saada
        //seuraajat=a
        //jetzt ist b der Anfang, ich will a als Anfang der dann zu b weiterleitet
        //seuraajat=b, uusiSeur=b
    //seuraajat: vanhat seuraajat
    //uuden seuraaja nextiin vanhaan seuraajaan
    //seuraajien alkuun uusi seuraaja
}

void Notifikaattori::poista(Seuraaja *poistSeur)
{
    cout<<"poistetaan seuraaja "<<poistSeur->getNimi()<<endl;
    Seuraaja *alku = seuraajat;
    while(alku != nullptr){
        if (alku->next==poistSeur){
            alku->next=poistSeur->next;
            }
        alku = alku->next;
    }
    }

    //poistSeura = B
    //kelataan listaa alkaen seuraajat
    //alku=seuraajat
    //alku=A
    //testaa onko alku=B
    //joe ei ole:alku =alku->next
    //alku=A, alku->next
    //testa onko alku=B
    //jos on poisto;
    //0->next=P->next
    //....
    //alku=P, alku=alku->next
    //seuraajat ->A A->next=B
    //B->next=C

void Notifikaattori::tulosta()
{
    cout<<endl;
    cout<<"notifikaatorin seuraajat"<<endl;

    Seuraaja *alku = seuraajat;
    while(alku != nullptr){
        cout<<"Listassa nyt "<<alku->getNimi()<<endl;
       // alku->paivitys("Kaikki hyvin");
        alku = alku->next;
        }
    }


void Notifikaattori::postita(string viesti)
{
    cout<<endl;
    Seuraaja *alku=seuraajat;
    while(alku !=nullptr)
    {
        alku->paivitys(viesti);
        alku=alku->next;
    }
}
