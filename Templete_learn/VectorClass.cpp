#include <iostream>
#include "VectorClass.h"

VectorClass::VectorClass()
{
    vect = new T[1];
    capacity = 1;
    length = 0 ;
}

VectorClass::~VectorClass()
{
    delete[] vect;
}

int VectorClass::push(T)//push to last index ::: 0 no problem - 1 problem;
{
    if(capacity==length)
    {
        T* temp = vect;
    }
    return 0;
}
int VectorClass::pop();//remove last index
{
    delete vect[length-1];
    length--; //decrease length 
    return 0; //sucessfull
}
int VectorClass::get_Size();//return length 
{
    return length ;
}
int VectorClass::get_Capacity();//return capacity
{
    return capacity;
}
int VectorClass::print();//print vector
{
    cout<<"Printing vector "
    for(int i=0 ; i<length ; i++)
    {
        cout<<" "<< i <<":"<< vect[i];
    }
    cout<<"\n";
}




