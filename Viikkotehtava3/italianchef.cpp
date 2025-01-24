#include "italianchef.h"

ItalianChef::ItalianChef()
{
    cout<<"ItalianChef constructor"<<endl;
}

ItalianChef::ItalianChef(string name)
    :Chef(name)
{
    cout<<"ItalianChef destructor "<<", Chef name "<<name<<endl;
}

ItalianChef::~ItalianChef()
{
    cout<<"ItalianChef destructor"<<endl;
}

bool ItalianChef::askSecret(string secret, int f, int w)
{
    water=w;
    flour=f;
    //onko salasana ok?
    if(secret==password)
    {
        cout<<"password is correct"<<endl;
        makepizza();
        return true;
    }

    if(secret!=password)
    {
        cout<<"password is wrong"<<endl;
        return false;
    }



    //askSecret tarkistaa onko salasana ok
    //parametrina annetut f -> flour ja w -> water pitaa sijoittaa jasenmuuttujien
    //jauhojen ja veden maara
    //jos on, kutsuu makepizza
    //funktio palauttaa true/false
}

int ItalianChef::makepizza()
{
    int pizza = 0;
    cout<<"let's make pizza!"<<endl;
    cout<<"we have flour: "<<flour<<endl;
    cout<<"we have water: "<<water<<endl;
    cout<<"makes pizza: "<<min(water/5, flour/5)<<endl;
    cout<<"with "<<water<<" water and "<<flour<<" flour we make "<<min(water/5, flour/5)<<" pizza"<<endl;
    return pizza;
    //tekee pizzoja niin paljon kun aineksia riittaa
    //5 flour, 5 water= 1 pizza
}
