#include "chef.h"

Chef::Chef() {}

Chef::Chef(string name)
{
    chefName=name;
    cout<<"Chef constructor,Chef name "<<chefName<<endl;
}

Chef::~Chef()
{
    cout<<"Chef destructor"<<endl;
}

string Chef::getChefName() const
{
    return chefName;
}

int Chef::makeSalad(int ingredients)
{
    int dishes=0;
    cout<<"Salad Ingredients" <<ingredients<<endl;
    //yksi annos = 5 ainesta
    //palauttaa annosten maara
    dishes=ingredients/5;
    return dishes;
}

int Chef::makeSoup(int ingredients)
{
    int Soup_dishes=0;
    cout<<"Soup Ingredients"<<ingredients<<endl;
    Soup_dishes=ingredients/3;
    return Soup_dishes;
}
