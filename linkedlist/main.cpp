#include <iostream>
#include "LinkedList.h"



int main()
{
    LinkedList mylink;
    mylink.Add(1);
    mylink.Add(2);
    mylink.Add(3);
    mylink.Add(4);
    mylink.Add(5);

    LinkedList mylink1;
    mylink1.Add(11);
    mylink1.Add(12);
    mylink1.Add(13);
    mylink1.Add(14);
    mylink1.Add(15);



    mylink.Find(3);
    mylink.Find(6);

    mylink.PrintList();
    mylink.PrintSize();

    mylink1.PrintList();
    mylink1.PrintSize();

    mylink.RemoveLine(3);
    mylink.PrintList();
    mylink.RemoveLine(2);
    mylink.PrintList();
    mylink.RemoveLine(2);
    mylink.PrintList();
    mylink.RemoveLine(1);
    mylink.PrintList();
    mylink.Add(5);
    mylink.PrintList();
    mylink.RemoveLine(1);
    mylink.PrintList();
    mylink.RemoveLine(6);
    mylink.PrintList();
    mylink.RemoveLine(1);
    mylink.PrintList();

    mylink1.Sorting_Bubble();
    mylink1.PrintList();

    mylink1.RemoveValue(2);
    mylink1.PrintList();
    mylink1.RemoveValue(12);
    mylink1.PrintList();

    mylink.Add(3);
    mylink.Add(4);
    mylink.Add(4);
    mylink.Add(5);

    //LinkedList mylink2;
    LinkedList& mylink2 = mylink + mylink1;
    mylink2.PrintList();
    mylink2.Add(6);
    mylink2.Add(7);
    mylink2.PrintList();

    mylink2.Add(8);
    mylink2.Add(9);
    mylink2.PrintList();

    return 0;
}
//refferance https://www.usna.edu/Users/cs/wcbrown/courses/S20SI204/lec/l34/lec.html
