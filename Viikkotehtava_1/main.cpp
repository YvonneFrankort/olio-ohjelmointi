#include <iostream>
#include <ctime>

using namespace std;

int game(int maxnum);

int main()
{
    int arvaustenLukumaara = 0;
    int maxnum = 40;
    arvaustenLukumaara = game(maxnum);
    cout << "Arvausia: " << arvaustenLukumaara << endl;

    return 0;
}

int game(int maxnum){

    int satunnaisluku;
    int arvaus=0;
    int arvaustenLukumaara=0;
    cout << "maxnum = " << maxnum << endl;

    //1. arvotaan satnunnainen luku
    //satunnaisluku = 17;
    srand(time(NULL));
    satunnaisluku = rand() % maxnum;
    while (arvaus != satunnaisluku){
        //2. kysyaan pelajalta arvaus
        cout << "Anna luku: "
             << endl;
        cin >> arvaus;
        arvaustenLukumaara++;
        //3. tarkistetaan suurempi, pienempi, yhtasuuri
        //3.1 jos arvaus yhtasuuri kuin satunnaisluku
        //3.2 jos arvaus pienempi
        //3.3 jos arvaus suurempi
        if (arvaus == satunnaisluku){
            cout << "Vastaus on oikein!" << endl;
        }else if (arvaus > satunnaisluku){
            cout << "Vastaus on pienempi" << endl;
        }else if (arvaus < satunnaisluku){
            cout << "Vastaus on suurempi" << endl;
        }
    }

    //cout << "Arvauksia: " << arvaustenLukumaara << endl;
    return arvaustenLukumaara;
}

