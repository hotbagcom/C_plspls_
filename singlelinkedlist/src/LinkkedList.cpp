#include <iostream>
#include "LinkkedList.h"

LinkkedList::LinkkedList()
{
    Size=0;
}

LinkkedList::~LinkkedList()
{

}

void LinkkedList::Add(int value_)
{

    Node* newNode = new Node(value_);
    if (Size==0)
    {
        first = newNode;
    }
    else
    {

        last->after = newNode;
    }
    last = newNode;
    Size = Size +1;
    std::cout<<"Adding "<<last->value <<" to list"<<std::endl;
}
/*
void LinkkedList::Remove(int num)
{
    std::cout<<"Removing "<<num<<" from list"<<std::endl;
    Node* temp =first;

    if(  1<num && num<Size )
    {


        for(int j=1 ; j<num-1 ; j++)
        {
            temp = temp -> after;
        }
        Node* temp1 = temp->after;
        temp->after = temp1->after;

        temp1->after = nullptr;
        LinkkedList::Size--;
        delete temp1;
    }

     else if(num == 1)
    {

        first = first->after;
        temp->after = nullptr;
        LinkkedList::Size--;
        delete temp;
    }
    else if(num == LinkkedList::Size )
    {
        for(int j=1 ; j<num-1 ; j++)
        {
            temp = temp -> after;
        }
        temp->last = temp->last->before;
        temp->last->after->before = nullptr;
        LinkkedList::Size--;
        delete temp->last->after;
    }
    else
    {
        std::cout <<" Please give a valid value ! " <<std::endl;
    }



}
*/
bool LinkkedList::Find(int value_)
{
    Node* temp = first;
        for (int i =0 ;( i<LinkkedList::Size ) || (temp != nullptr); i++)
        {
            if(temp->value == value_)
            {
                std::cout<<"Found "<<temp->value<<" in the list"<<std::endl;
                return true;
            }

            temp = temp->after;
        }
        std::cout<<"Could not found "<<value_<<" in the list"<<std::endl;
        return false;
}
void LinkkedList::Print()
{
    std::cout<< "Printing list " <<std::endl;
    Node* temp = first;
    for (int i =1 ;( i<=LinkkedList::Size ) || (temp != nullptr); i++) {
        std::cout<< temp->value <<std::endl;
        temp = temp->after;
    }
}

void LinkkedList::getSize()
{std::cout<<"amount of value in the link is "<<Size<<std::endl;}

void LinkkedList::Sorting()
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
