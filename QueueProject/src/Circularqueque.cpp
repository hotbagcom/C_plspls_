#include "Circularqueque.h"

Circularqueque::Circularqueque(int _maxSize) : sira(_maxSize)
{

}
Circularqueque::~Circularqueque()
{
    //dtor
}
bool Circularqueque::push( int _new )
{
//    std::cout << "Pushing " << _new;
//     if( Rear>=Front )//rear bigger than front
//     {
//         if( Rear<MaxSize-1 )
//         {
//             arr[Rear++] = _new;
//             ;
//             std::cout << " Succeeded " << std::endl;
//             return false;//succeed
//         }
//
//         else if( Front>0 )//index 0 empty
//         {
//             arr[Rear] = _new;
//             Rear=0;
//             std::cout << " Succeeded " << std::endl;
//             return false;//succeed
//         }
//        std::cout << " Failed because of full queue" << std::endl;
//         return true;//full queque
//     }
//     else if(Rear < Front-1) //rear smaller than front
//     {
//             arr[Rear++] = _new;
//             std::cout << " Succeeded " << std::endl;
//             return false;//succeed
//     }

     if( ((Rear + 1 ) % MaxSize) != Front )
     {
         arr[Rear] = _new;
         Rear = (Rear + 1 ) % MaxSize;
         std::cout << " Succeeded " << std::endl;
         return false;//succeed
     }


     std::cout << " Failed unknown " << std::endl;
     return true;

}

int Circularqueque::pop()
{
//    if( Front<Rear )
//    {
//
//        std::cout << "Popped a " << arr[Front+1] << std::endl;
//        return arr[Front++];
//    }
//
//    else if( Rear<Front )
//    {
//        if( Front<MaxSize-1 )
//        {
//            std::cout << "Popped b " << arr[Front+1] << std::endl;
//            return arr[Front++];
//        }
//        else //if( Rear>0 ) // Front @ maximon-1
//        {
//            int temp =arr[Front];
//            std::cout << "Popped c " << temp << std::endl;
//            Front=0;
//            return temp;
//        }
//    }



    if(Rear != Front)
    {
        Front = (Front + 1 ) % MaxSize;
        return arr[(Front - 1 + MaxSize) % MaxSize];
    }

    std::cout << "Pop failed , nothing to pop " << std::endl;
    return 0;//noting to pop
}


