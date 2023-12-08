#ifndef CHILD_H
#define CHILD_H
#include "father.h"

class child :public father
{
    public:
        child(int _tooth , int _toy , int _age , int _month);
        virtual ~child();
        get_have();
        int tooth , toy;
        get_life();
    protected:

    private:
};

#endif // CHILD_H
