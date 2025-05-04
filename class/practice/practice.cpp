// power class

#include <iostream>

using namespace std;


class pwr
{
    double def_base;
    int def_exp;
    double def_val;

public:

    pwr(double base, int exp);

};

pwr::pwr(double base, int exp)
{
    this -> def_base = base;
    this -> def_exp = exp;
    this -> def_val = 1;

}

