#include <iostream>

template<typename T> 
class VectorClass {
    
    public :
    VectorClass();
    ~VectorClass();
    //VectorClass& VectorClass();//copy constructor
    int push(T);//push to last index ::: 0 no problem - 1 problem;
    int pop();//remove last index
    int get_size();//return length 
    int get_capacity();//return capacity
    int print();//print vector
    
    private:
    T* vect;
    int capacity;
    int length;
};