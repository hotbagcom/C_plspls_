#include "car.h"
#include <string.h>
#include <iostream>

car::car(std::string _marka ,int _seri_num ,int _emission_km)
{//using pointer variable is not necessery
    Marka = _marka ;
    Seri_num = new int(_seri_num);
    Emission_km = _emission_km;//released CO2 per km
    total_Emission = total_Emission + 300;//creating an object increase emission
    Car_name =new  std::string( Marka +" : " + std::to_string( *Seri_num));

    //give notification about these new car
    std::cout<<"Creating a new car "<< *Car_name <<" with emission "<< Emission_km <<" grams "<<std::endl;
}

car::~car()
{
    std::cout<<"Destructing " << *Car_name <<std::endl;
    total_Emission = total_Emission + 200 ;
    delete Seri_num;
    delete Car_name;
}
car::car(const car &CC )
{
    //for copied object these two variable same
    Emission_km = CC.Emission_km;
    Marka = CC.Marka;

    //copied car's seri number is 1000 more than original car's seri number
    Seri_num = new int(*CC.Seri_num + 1000);

    //copied car's name is difficult than normally created cars' name
    Car_name = new std::string(Marka + " : " + std::to_string( *Seri_num) +" Copy of " + std::to_string( *CC.Seri_num));

    total_Emission = total_Emission +300;//creating an object increase emission

    //give notification about these new car
    std::cout<<"Copying car " + *CC.Car_name + ". Name of new copy car is " + *Car_name <<std::endl;

}



void car::distance(int _km)
{
    //driving a car increase emission amount
    total_Emission = total_Emission + Emission_km * _km;
}

