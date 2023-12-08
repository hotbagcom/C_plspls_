#include "insan.h"
#include <iostream>

insan::insan(std::string _isim, int _yas, int _boy)
{
    std::cout << "Bir insan yaratılıyor" << std::endl;
    isim = _isim;
    yas = _yas;
    boy = _boy;
}


void insan::kendiniTanit()
{
    std::cout << "İsmim " << isim << " yasim " << yas << " boyum " << boy << std::endl;
}
