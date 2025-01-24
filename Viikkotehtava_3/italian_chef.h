#ifndef ITALIAN_CHEF_H
#define ITALIAN_CHEF_H
#include <string>
#include <iostream>

using namespace std;

class Chef
{
public:
    Chef(string name);
    ~Chef();
    string getName();
    int makeSalad(int);
    int makeSoup(int);

protected:
    string Chef_Name;
};


class Italian_Chef : Chef
{
public:
    Italian_Chef(string);
    ~Italian_Chef();
    bool askSecret(string, int, int);

private:
    string password("pizza");
    int flour;
    int water;
    int makepizza();
};


#endif // ITALIAN_CHEF_H
