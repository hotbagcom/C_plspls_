#include "father.h"
#include <iostream>

using namespace std;
father::father(int _age, int _month)
{
    age = _age;
    month = _month;
}

father::~father()
{
    //dtor
}


father::get_life()
{
    cout << " Failed unknown " << endl;
    std::cout << " Succeeded " << std::endl;
    cout << "I partied " <<age<< " times \n" << endl;
    std::cout << "I get extra " <<month<< " this year " << std::endl;
}
