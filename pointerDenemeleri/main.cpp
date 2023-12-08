#include <iostream>

using namespace std;

int main()
{
    int b = 8;
    int *c = &b;
    *c = 10;


    int *a = NULL;
    unsigned const short sizeOfArray = 3;
    a = new int[sizeOfArray];
    *a = 5;

    cout<<"c " << c << " *c " << *c << " &b " << &b << " b " << b << endl;

//    for (int i = 0; i<sizeOfArray; i++)
//    {
//        a[i] = 2*i;
//    }
//
//
//    for (int i = 0; i<sizeOfArray; i++)
//    {
//
//        cout <<" deger " << a[i] << endl;
//
//    }


    return 0;
}
