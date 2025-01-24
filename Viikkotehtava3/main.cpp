#include <iostream>
#include "chef.h"
#include "ItalianChef.h"


using namespace std;

int main()
{

    Chef c_olio("Gordon");

    int dishes=c_olio.makeSalad(24);
    cout<<"ready salads "<<dishes<<endl;

    int Soup_dishes=c_olio.makeSoup(30);
    cout<<"ready soups "<<Soup_dishes<<endl;




    ItalianChef i_olio("Super Mario");

    bool passwordOK = i_olio.askSecret("pizza",18,20);
    return 0;

}
