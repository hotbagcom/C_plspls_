#ifndef INSAN_H
#define INSAN_H
#include <string>

class insan{
private:
    std::string isim;
    int yas;
    int boy;

public:
    insan(std::string _isim, int _yas, int _boy);
    void kendiniTanit();
};


#endif // INSAN_H
