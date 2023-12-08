#include "yigin.h"

yigin::yigin(int _maxSize)
{
    maxSize = _maxSize;
    arr = new int[maxSize];
    currentIndex = 0;
}

yigin::~yigin()
{
    //dtor
}




bool yigin::push(int num)
{
    if(currentIndex< maxSize)
    {
        arr[++currentIndex] = num;
        return 0;
    }

    return 1;
}

int yigin::pop(){
    if(currentIndex >= 0)
    {
        return arr[currentIndex--];
    }

        return 0;

}

