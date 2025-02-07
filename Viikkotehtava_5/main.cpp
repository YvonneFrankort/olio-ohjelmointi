#include <iostream>
#include "seuraaja.h"
#include <memory>
#include "notifikaattori.h"


using namespace std;

int main()
{
    Seuraaja *A = new Seuraaja("Adam");
    Seuraaja *B = new Seuraaja("Berta");
    Seuraaja *C = new Seuraaja("Chloe");

    Notifikaattori *N = new Notifikaattori();
    cout<<endl;

    N->lisaa(A);
    N->lisaa(B);
    N->lisaa(C);
    N->tulosta();

    N->poista(B);
    N->tulosta();

    N->postita("Aurinko paistaa");

    /*A->next = B;
    B->next = C;

    Seuraaja *alku = A;
    while(alku != nullptr){ // tehdään silmukassa jotain oliolle	o = o->next

        cout<<"Listassa nyt "<<alku->getNimi()<<endl;
        alku->paivitys("Kaikki hyvin");
        alku = alku->next;
        if (alku != nullptr){
        cout<<"listassa seuraava "<<alku->getNimi()<<endl;
        }else{
            cout<<"Lista loppui";
        }
    }

    cout<<endl;
*/

    delete A;
    delete B;
    delete C;
    delete N;

    //return 0;

    //delete n;
}
