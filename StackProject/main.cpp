#include <iostream>
#include "yigin.h"
using namespace std;

int main()
{
    yigin sayilar(5);

    if(sayilar.push(0))
    {
        cout << " bellek dolu " <<endl;
    }
    sayilar.push(1);
    sayilar.push(2);
    sayilar.push(3);
    sayilar.push(4);
    sayilar.push(5);
    if(sayilar.push(6))
    {
        cout << " bellek dolu " <<endl;
    }
    cout << "pop1 " << sayilar.pop()
        << " pop2 " << sayilar.pop()
        << " pop3 " << sayilar.pop()
        << " pop4 " << sayilar.pop()
        << " pop5 " << sayilar.pop()

     << endl;



    return 0;
}
