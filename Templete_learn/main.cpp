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
    
    int capacity;
    int index;

public:
    Y* vect;
    VectorClass();
    //virtual ~VectorClass();
    VectorClass(const VectorClass &VC);
    int push(Y in_data);//push to last index ::: 0 no problem - 1 problem
    int pop();//remove last index
    int get_size();//return index 
    int get_capacity();//return capacity
    int print();//print vector
    int print(int arraytype);
    int fill_random(int size_to_fill, Y lowerlimit, Y upperlimit);
    int sort_bubble(Y vectorb1[],int const sizeof_vect);
    int merge(Y vectorm2[], int const leftm2,int const midm2, int const rightm2);
    int sort_merge(Y vectorm1[],int const firstm1,int const lastm1);
    int quick(Y vectorq2[], int begining, int sizeof_vect);
    int sort_quick(Y vectorq1[], int begining, int sizeof_vect);

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
    int VectorClass<Y>::print(int arraytype)//print vector
    {
        if(capacity<=index)
            return -8; //8 ERROR_NOT_ENOUGH_MEMORY
        std::cout<<"Size of this class "<<get_size()<<std::endl;

        std::cout<<"Vector productor \n";
        std::cout<<" { ";
        for(int i=0 ; i<index ; i++)
        {
            std::cout<< vect[i]<<" , ";
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

    template<typename Y>   //bubble sorting
    int VectorClass<Y>::sort_bubble(Y vectorb1[], int const sizeof_vect)
    {
        Y temp=0;
        for(int i=0 ; i<sizeof_vect ; i++)
        {
            for(int j=i ; j<sizeof_vect ; j++)
            {
                if(vectorb1[i]>vectorb1[j])
                {
                    temp = vectorb1[j];
                    vectorb1[j] = vectorb1[i];
                    vectorb1[i] = temp;
                }
            }
        }
        return 0;
    }
    template<typename Y> //merge sorting
    int VectorClass<Y>::merge(Y vectorm2[], int const leftm2, int const midm2, int const rightm2)
    {
        int const subVectorOne = midm2 - leftm2 + 1; 
        int const subVectorTwo = rightm2 - midm2; 
        //vector is produced in template <Y>
        int *leftVector = new int[subVectorOne] ;
        int *rightVector = new int[subVectorTwo]; 

        for (int i = 0; i < subVectorOne; i++) 
		    leftVector[i] = vectorm2[leftm2 + i]; 
	    for (int j = 0; j < subVectorTwo; j++) 
		    rightVector[j] = vectorm2[midm2 + 1 + j]; 
            
        int indexOfSubVectorOne = 0;
		int indexOfSubVectorTwo = 0; 
        int indexOfMergedVector= leftm2; 

        while (indexOfSubVectorOne < subVectorOne &&
          indexOfSubVectorTwo < subVectorTwo) 
	    { 
            if (leftVector[indexOfSubVectorOne] <= 
              rightVector[indexOfSubVectorTwo]) 
            { 
                vectorm2[indexOfMergedVector] = 
                leftVector[indexOfSubVectorOne]; 
                indexOfSubVectorOne++; 
            } 
            else
            { 
                vectorm2[indexOfMergedVector] = 
                rightVector[indexOfSubVectorTwo]; 
                indexOfSubVectorTwo++; 
            } 
            indexOfMergedVector++; 
	    } 

        while (indexOfSubVectorOne < subVectorOne) 
        { 
            vectorm2[indexOfMergedVector] = 
            leftVector[indexOfSubVectorOne]; 
            indexOfSubVectorOne++; 
            indexOfMergedVector++; 
        } 
        	while (indexOfSubVectorTwo < subVectorTwo) 
        { 
            vectorm2[indexOfMergedVector] = 
            rightVector[indexOfSubVectorTwo]; 
            indexOfSubVectorTwo++; 
            indexOfMergedVector++; 
        } 

        return 0;
    }
    template<typename Y> 
    int VectorClass<Y>::sort_merge(Y vectorm1[],int const firstm1, int const lastm1)
    {
        if (firstm1 >= lastm1) //you arrived smallest vector part
		    return 0; 
        int midm1 = firstm1 + (lastm1 - firstm1) / 2; 
        sort_merge(vectorm1, firstm1, midm1); 
	    sort_merge(vectorm1, midm1 + 1, lastm1);
	    merge(vectorm1, firstm1, midm1, lastm1); 
        
        return 0;
    }
    template<typename Y>  //quick sorting 
    int VectorClass<Y>::quick(Y vectorq2[], int begining, int sizeof_vect)
    {

        int pivot2 =  sizeof_vect-1 ; //devekuşu
        Y temp_swap = 0;
          
        int inc_prev = begining-1 , inc_forw =0 ;   
        while( inc_forw<pivot2)
        {
            if(vectorq2[inc_forw] <= vectorq2[pivot2])
            {
                inc_prev++;
                if(vectorq2[inc_prev] < vectorq2[pivot2])
                {
                    temp_swap = vectorq2[inc_prev] ;
                    vectorq2[inc_prev] = vectorq2[inc_forw];
                    vectorq2[inc_forw] = temp_swap;  
                }
                
            }

            inc_forw++;
        }// operation
        temp_swap = vectorq2[inc_prev] ;
        vectorq2[inc_prev] = vectorq2[pivot2];
        vectorq2[pivot2] = temp_swap;  
                
        //there is no other option however take your precaution
        pivot2=inc_prev+1;
        return pivot2;
    }
    template<typename Y> 
    int VectorClass<Y>::sort_quick(Y vectorq1[], int begining, int sizeof_vect)
    {
        if(begining<sizeof_vect-1)
        {
            int pivot1 = quick(vectorq1,begining,sizeof_vect);

            sort_quick( vectorq1,begining,pivot1);
            sort_quick(vectorq1,pivot1+1,sizeof_vect);
        }
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
    Ozgur.fill_random(8,3,8);
    Ozgur.print();

    VectorClass<int> Ersoy;
    Ersoy.fill_random(10,12,81);
    Ersoy.print(1);

    VectorClass<int> Fatih(Ersoy);
    VectorClass<int> Serkan(Ersoy);

    Ersoy.sort_bubble(Ersoy.vect ,sizeof(Ersoy.vect)/sizeof(Ersoy.vect[0]) );
    Fatih.sort_merge(Fatih.vect, 0,(sizeof(Fatih.vect)/sizeof(Fatih.vect[0]))-1  );
    Serkan.sort_quick(Serkan.vect, 0, (sizeof(Serkan.vect)/sizeof(Serkan.vect[0]))-1 );

    Ersoy.print(1);
    Fatih.print(1);
    Serkan.print(1);



}
