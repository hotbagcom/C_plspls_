#ifndef SIRA_H
#define SIRA_H
#include <iostream>

class sira
{
    public:
        sira(int);
        virtual ~sira();
        sizeofbuffer(int _MaxSize);
        bool push(int _new);
        int pop();
       // circle(bool dir);
    protected:
        int *arr;
        int Rear;
        int Front;
        int MaxSize;
    private:

};

#endif // SIRA_H
