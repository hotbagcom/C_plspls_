#include <iostream>
#include "LinkkedList.h"



int main()
{
    LinkkedList mylink;
    mylink.Add(1);
    mylink.Add(2);
    mylink.Add(3);
    mylink.Add(4);
    mylink.Add(5);



    if (mylink.Find(3))
        std::cout<<"in it "<<std::endl;
    if (mylink.Find(6))
        std::cout<<"not in it "<<std::endl;

    mylink.Print();
    mylink.getSize();

    mylink.Add(2);
    mylink.Add(8);
    mylink.Add(7);
    mylink.Add(6);

    mylink.Sorting();
    mylink.Print();
    return 0;
}
//refferance https://www.usna.edu/Users/cs/wcbrown/courses/S20SI204/lec/l34/lec.html
