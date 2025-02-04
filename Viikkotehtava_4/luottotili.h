#ifndef LUOTTOTILI_H
#define LUOTTOTILI_H
#include"pankkitili.h"

class Luottotili:public Pankkitili
{
public:

    Luottotili(string o, double lr);
    ~Luottotili();

    virtual bool withdraw(double summa) override;
    virtual bool deposit(double summa) override;

    double getBalance();

protected:
    double luottoRaja = 0;
};

#endif // LUOTTOTILI_H
