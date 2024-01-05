#include <iostream>
#include "LinkedList.h"

LinkedList::LinkedList()
{
    Size=0;
    LinkedList::first = nullptr;
    LinkedList::last = nullptr;
}

LinkedList::~LinkedList()
{

}

void LinkedList::Add(int value_)
{

    Node* newNode = new Node(value_);
    if (Size==0)
    {//Initialy my node is empty
        first = newNode;
    }
    else
    {
        newNode->before = last ;
        last->after = newNode;
    }
    last = newNode;
    Size = Size +1;
    std::cout<<"Adding "<<last->value <<" to list"<<std::endl;
}
void LinkedList::RemoveLine(int line)
{
     if(line>Size)
    {
        std::cout <<" Please give a valid value ! " <<std::endl;
        return ;
    }

    std::cout<<"Removing "<<line<<" from list"<<std::endl;
    Node* temp0 ;//nodetodelete->before nodetodelete_before
    Node* nodetodelete =first;
    Node* temp1 ;//nodetodelete->after
    for(int j=1 ; j<line ; j++)
    {
        nodetodelete = nodetodelete -> after;
    }

    //   nullptr|first| ... |temp0|nodetodelete|temp1| ... |last|nullptr
    temp0 = nodetodelete->before;
    temp1 = nodetodelete->after;

    if(temp0 != nullptr)//temp0 has a n after value//means we are not removing first
        temp0->after = temp1;

    if(temp1 != nullptr)//we are ot removing last
        temp1->before = temp0;

    if(temp0 == nullptr)//we are removing first so I have to re-define my first
        first = temp1 ;

    if(temp1 == nullptr)//we are removing last so I have to re-define my last
        last = temp0;

    nodetodelete->after = nullptr;
    nodetodelete->before = nullptr;
    Size--;
    delete nodetodelete;
}

void LinkedList::RemoveValue(int val)
{
    Node* temp0 ;//nodetodelete->before
    Node* nodetodelete =Find(val);
    Node* temp1 ;//nodetodelete->after

    //   nullptr|first| ... |temp0|nodetodelete|temp1| ... |last|nullptr

    if(nodetodelete==nullptr)
        return; //there  is no such value in the list so why would I continue .

    //I found the value that I want to remove , so ý remove the that node
    std::cout<<"Removing first ode which has "<< val <<" value in the list"<<std::endl;

    temp0 = nodetodelete->before;
    temp1 = nodetodelete->after;

    if(temp0 != nullptr)//temp0 has a n after value//means we are not removing first
        temp0->after = temp1;

    if(temp1 != nullptr)//we are ot removing last
        temp1->before = temp0;

    if(temp0 == nullptr)//we are removing first so I have to re-define my first
        first = temp1 ;

    if(temp1 == nullptr)//we are removing last so I have to re-define my last
        last = temp0;

    // If  I don't do this part when I try to delete the node ,
    // deleting goes to after/before which is another node
    //delete operation may find nodetodelete->after->before which is already deleted
    //this final attempt to delete will cause to catastrophic result in our code
    nodetodelete->after = nullptr;
    nodetodelete->before = nullptr;

    Size--;
    delete nodetodelete;
}

Node* LinkedList::Find(int value_)
{
    Node* temp = first;
    for (int i =1 ;( i<=Size ) || (temp != nullptr); i++)
    {
        if(temp->value == value_)
        {
            std::cout<<"Found "<<temp->value<<" in the list"<<std::endl;
            return temp; // if I found that value in my list ý return that node
        }

        temp = temp->after;
    }
    std::cout<<"Could not found "<<value_<<" in the list"<<std::endl;
    return nullptr; //this return means this list has not this value
}
void LinkedList::PrintList()
{
    std::cout<< "Printing list " <<std::endl;
    Node* temp = first;
    for (int i =1 ;( i<=Size ) || (temp != nullptr); i++)
    {
        std::cout<< temp->value <<std::endl;
        temp = temp->after;
    }
}

void LinkedList::PrintSize()
{
    std::cout<<"Amount of value in the link is "<<Size<<std::endl;
}

int LinkedList::getSize()
{
    return Size;
}


void LinkedList::Sorting_Bubble()
{
    std::cout<< "Bubble Sorting Linkedlist" <<std::endl;
    Node* temp = first;
    int temp_value;
    bool isorder = true ;
    for(int i = 1 ; i <= Size ; i++)
    {
        temp = first;
        for (int i =1 ; (temp->after != nullptr) ; temp = temp->after )
        {
            if(temp->value > temp->after->value)
            {
                std::cout<< "Switching "<< i <<":" << temp->value << "<->" << i+1 <<":" << temp->after->value <<std::endl;
                temp_value =(temp->value);
                (temp->value) = (temp->after->value);
                temp->after->value = temp_value;
                isorder = false;
            }
            i++;
        }
        if(isorder)
            break;
        isorder = true;
    }
}

LinkedList& LinkedList::operator+(const LinkedList& second_add) {
    LinkedList* op_ovl_list = new LinkedList();
    Node* current = this->first;//take first node of first linkedlist

    while(current != nullptr) {//add all first linkedlist to my new linkedlist
        op_ovl_list->Add(current->value);
        current = current->after;
    }

    current =second_add.first;
    while(current != nullptr) {//add all first linkedlist to my new linkedlist
        op_ovl_list->Add(current->value);
        current = current->after;
    }
    return (*op_ovl_list);//return as data of my new linkelist
}
