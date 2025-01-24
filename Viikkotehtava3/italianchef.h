#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H

#include "chef.h"
class ItalianChef : public Chef
{
public:
    ItalianChef();
    ItalianChef(string name);
    ~ItalianChef();

    bool askSecret(string secret, int f, int w);

private:
    string password = "pizza";
    int makepizza();
    int flour;
    int water;

};

#endif // ITALIANCHEF_H
