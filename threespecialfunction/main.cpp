#include <iostream>
#include "car.h"
#include <string.h>
using namespace std;

    int car::total_Emission = 0;

int main(void)
{

    //Cretate object as pointer
    car *A1=new car("Audi" ,1 ,100);
    car *M1=new car("Mercedes" ,2 ,150);
    car *A2=new car("Audi" ,3 ,100);
    car *M2=new car("Mercedes" ,4 ,150);

    //Copy pointer object to new pointer object
    car *A3 = new car(*A1);//copy audi

    //First car 5km, 2. car 10 km,
    //3. Car 50 km, 4. Car 40 km,
    //5. Car 100 km .
    A1->distance(5);
    M1->distance(10);
    A2->distance(50);
    M2->distance(40);
    A3->distance(100);

    //Destruct all created pointer object
    //incase of memory leak
    delete A1;
    delete A2;
    delete A3;
    delete M1;
    delete M2;

    //print total Emission stored in static variable
    cout<< "Total emission in static " << car::total_Emission <<endl;
    return 0;
}
