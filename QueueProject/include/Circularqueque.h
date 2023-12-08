#ifndef CIRCULARQUEQUE_H
#define CIRCULARQUEQUE_H
#include "sira.h"

class Circularqueque : public sira
{
public:
        Circularqueque(int);
        virtual ~Circularqueque();

        bool push(int _new);//overload
        int pop();//owerload

    protected:

    private:
};

#endif // CIRCULARQUEQUE_H
