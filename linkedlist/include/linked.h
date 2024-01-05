#ifndef LINKED_H
#define LINKED_H
#include "node.h"


class linkedList
{
    public:
        linkedList(int value_);
        virtual ~linked();

        node  *nodefirst ;
        static int size_node;
        add();
        remove();
        find();
        void print();
    protected:


    private:
};

#endif // LINKED_H
