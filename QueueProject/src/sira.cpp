#include "sira.h"

 sira::sira(int _maxSize)
 {
        MaxSize = _maxSize;
        arr = new int[MaxSize];
        Front = 0;
        Rear = 0;
 }
sira::~sira()
{
    //dtor
}

 sira::sizeofbuffer(int _MaxSize)
{
}
 bool sira::push(int _new)
 {
     if( Rear<(MaxSize) )//empty right
     {
         arr[Rear] = _new;
         Rear++;
         return false;
     }

    else
        return true;

 }

 int sira::pop()
 {
     //if (Front)
    if(Front<Rear)
        return arr[Front++];




    return 1;
 }
/*
 sira::circle(bool dir)
 {


    if( dir )//forward
    {
       // arr[0]= arr[Rear-1];
        for(int i = Rear; i>0 ; i-- )
        {
            arr[Rear] = arr[Rear-1];
        }


    }
    else //backward
    {

        for(int i = 0; i<(Rear-1) ; i++ )
        {
            arr[Rear] = arr[Rear+1];
        }
        arr[(Rear-1)]= arr[0];
    }

 }

*/


