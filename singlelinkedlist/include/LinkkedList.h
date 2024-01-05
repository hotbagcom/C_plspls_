#ifndef LINKKEDLIST_H
#define LINKKEDLIST_H

class Node{
    public:
    int value;
    Node* after;
    Node(int value_) : value(value_) , after(nullptr) {}
};

class LinkkedList
{
    public:
        LinkkedList();
        virtual ~LinkkedList();
        void Add(int value_);
        //void Remove(int num);
        bool Find(int value_);

        void Print();
        void getSize();
        void Sorting();

    protected:

    private:
        Node* last;
        Node* first;
        int Size;
};

#endif // LINKKEDLIST_H
