//baya bi elden geçmesi lazım 

#include <iostream>
#include <typeinfo>
#include <cstdlib>
#include <time.h> 
//#include "C:\Users\tnc\Documents\codeblok\inform\Templete_learn\VectorClass.h"
//#include "VectorClass.h"

//////h code

template<typename Y>
class VectorClass {
private:
    Y* vect;
    int capacity;
    int index;

public:

    VectorClass();
    //virtual ~VectorClass();
    VectorClass(const VectorClass &VC);
    int push(Y in_data);//push to last index ::: 0 no problem - 1 problem
    int pop();//remove last index
    int get_size();//return index 
    int get_capacity();//return capacity
    int print();//print vector
    int fill_random(int size_to_fill, Y lowerlimit, Y upperlimit);
    int sort_bubble();
    int sort_merge();
    int sort_quick();
};

    ///cpp code

    //////VectorClass


    template<typename Y> 
    VectorClass<Y>::VectorClass()    
    : capacity(1), vect(new Y[1]), index(0)
    {}

    /*
    VectorClass::~VectorClass()
    {
        delete[] vect;
    }
    */

    template<typename Y> 
    VectorClass<Y>::VectorClass(const VectorClass &VC ):index(VC.index),capacity(VC.capacity),vect(VC.vect) //for copied object these two variable same
    {
        std::cout<<"Copying vector \n";
        //Y* vect=VC.vect;
        std::cout<<"Now copied :) "<<std::endl;
        
    }

    template<typename Y> 
    int VectorClass<Y>::push(Y in_data)//push to last index ::: 0 no problem - 1 problem;
    {
        
        if(capacity==index)
        {
            Y* temp = new Y[capacity];
            capacity = 2*capacity;
             for(int j=0 ; j<index ; j++)
                temp[j] = vect[j];
           
            vect = temp;
            
        }
        vect[index] = in_data ;
        std::cout<<"Adding new value: " <<in_data <<std::endl;
        index++;

        return 0;
    }
     
    template<typename Y> 
    int VectorClass<Y>::pop()//remove last index
    {
        if(index==0)
            return -1;//empty vector

        std::cout<<"Last index was "<< --index <<", removing value:"<<vect[index];
        std::cout<<"\n";

        if(index<capacity/2-2)
        {
            capacity = capacity/2-2;
            Y* temp = new Y[capacity];
             for(int j=0 ; j<index ; j++)
                temp[j] = vect[j];
            vect = temp;
        }
        return 0; //sucessfull
    }
    
    template<typename Y> 
    int VectorClass<Y>::get_size()//return stored data amount 
    {
        return index;
    }
    
    template<typename Y> 
    int VectorClass<Y>::get_capacity()//return capacity
    {
        return capacity;
    }
    
    template<typename Y> 
    int VectorClass<Y>::print()//print vector
    {
        if(capacity<=index)
            return -8; //8 ERROR_NOT_ENOUGH_MEMORY
        std::cout<<"Size of this class "<<get_size()<<std::endl;

        std::cout<<"Printing vector ";
        
        for(int i=0 ; i<index ; i++)
        {
            std::cout<<" "<< i <<":"<< vect[i];
        }
        std::cout<<"\n";
        
        return 0;
    }
    
    template<typename Y>
    int VectorClass<Y>::fill_random(int size_to_fill, Y lowerlimit, Y upperlimit )
    {
        if(lowerlimit>=upperlimit)
            return -1; // buna uygun kodu araştır
        srand(time(0));
        for(int jj=0; jj<size_to_fill ;jj++)
        {            
            push(rand()%(upperlimit - lowerlimit +1) + lowerlimit);
        }
        //randomu olştur 
        //bunları farklı türler için de yaz
        return 0;
    }




int main()
{
    //VectorClass<int> vector;

//int   
    VectorClass<int> Arif ;
    Arif.push(10);
    Arif.push(5);
    Arif.push(20);
    Arif.push(16);
    Arif.push(7);
    std::cout<<"Size Of Arif " <<Arif.get_size()<<std::endl;
    Arif.print();
    Arif.pop();
    Arif.print();
    Arif.push(32);
    Arif.push(25);
    Arif.push(17);
    Arif.print();
    Arif.pop();
    Arif.print();
    Arif.pop();
    Arif.print();
    Arif.pop();
    Arif.print();
    Arif.pop();
    Arif.print();
    std::cout<<"Size Of Arif " <<Arif.get_size()<<std::endl;
    std::cout<<"Reserved Size Of Arif " <<Arif.get_capacity()<<std::endl;
//double
    VectorClass<double> Alper;
    Alper.push(2.45);
    Alper.push(1.78);
    Alper.push(3.12);
    Alper.push(5.01);
    Alper.push(4.17);
    Alper.push(1.56);
    Alper.push(1.64);
    Alper.push(3.29);
    std::cout<<"Size Of Alper " <<Alper.get_size()<<std::endl;
    Alper.print();
    Alper.pop();
    Alper.print();
    std::cout<<"Size Of Alper " <<Alper.get_size()<<std::endl;
    std::cout<<"Reserved Size Of Alper " <<Alper.get_capacity()<<std::endl;
//char
    VectorClass<char> Burak;
    Burak.push('a');
    Burak.push('b');
    Burak.push('c');
    Burak.push('d');
    Burak.push('e');
    Burak.push('f');
    Burak.print();
    Burak.pop();
    Burak.print();
    Burak.push('g');
    Burak.push('h');
    Burak.push('j');
    std::cout<<"Size Of Burak " <<Burak.get_size()<<std::endl;
    std::cout<<"Reserved Size Of Burak " <<Burak.get_capacity()<<std::endl;
    Burak.pop();
    Burak.pop();
    Burak.pop();
    Burak.pop();
    Burak.pop();
    Burak.pop();
    Burak.pop();
    std::cout<<"Size Of Burak " <<Burak.get_size()<<std::endl;
    std::cout<<"Reserved Size Of Burak " <<Burak.get_capacity()<<std::endl;
    Burak.push('k');
    Burak.push('l');
    Burak.push('m');
    Burak.push('n');
    Burak.print();
    std::cout<<"Size Of Burak " <<Burak.get_size()<<std::endl;
    std::cout<<"Reserved Size Of Burak " <<Burak.get_capacity()<<std::endl;
//copy constructor
    VectorClass<double> Tugay(Alper);
    std::cout<<"Alper ";
    Alper.print();
    std::cout<<"Tugay ";
    Tugay.print();

    VectorClass<int> Ozgur(Arif);
    Ozgur.print();
    Ozgur.fill_random(4,3,8);


    /*
    Adding new value: 7
    Adding new value: 6
    Adding new value: 3
    Adding new value: 5
    */
    /*
    Adding new value: 6
    Adding new value: 3
    Adding new value: 7
    Adding new value: 4
   */

}
