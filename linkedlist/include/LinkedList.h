#ifndef LINKEDLIST_H
#define LINKEDLIST_H

class Node
{
    public:
    int value;
    Node* before;
    Node* after;
    Node(int value_) : value(value_) , before(nullptr) , after(nullptr) {}
};

class LinkedList
{
    public:
        LinkedList();
        virtual ~LinkedList();
        void Add(int value_);
        void RemoveLine(int line);//index
        void RemoveValue(int val);
        Node* Find(int value_);
        LinkedList& operator+( const LinkedList& second_add );

        void PrintList();
        void PrintSize();
        int getSize();
        void Sorting_Bubble();

        Node* last;
        Node* first;

    protected:

    private:


        int Size;
};

#endif // LINKEDLIST_H
