#ifndef NODE_H
#define NODE_H


class Node
{
    public:
        Node(int value_);
        virtual ~Node();

        int value;
        Node *prev ;
        Node *next ;

    protected:

    private:
};

#endif // NODE_H
