#include <iostream>

using namespace std;
#include"child.h"
int main()
{
    child little(5,2,7,9);
    little.get_life();
    little.get_have();
    little.age=5;
    little.toy=2;
    little.month=11;
    little.get_life();
    little.get_have();
    return 0;
}
