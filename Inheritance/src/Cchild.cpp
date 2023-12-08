#include "child.h"
#include <iostream>

using namespace std;
child::child(int _tooth , int _toy, int _age ,int _month): father( _age , _month )
{
    tooth = _tooth;
    toy = _toy;
}

child::~child()
{
    //dtor
}

child::get_have()
{
    cout<<"I have "<<tooth<<" tooth \n"<<endl;
    cout<<"I have "<<toy<<" toy "<<endl;
}
child::get_life()
{
    cout<<"I have "<<toy<<" toy when I was"<< age <<endl;
}
