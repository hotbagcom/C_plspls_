#ifndef CAR_H
#define CAR_H
#include <string.h>
#include <iostream>

class car
{
    public:
        //constructor
        car(std::string _marka , int _seri_num , int _emission_km);
        //copy constructor
        car(const car &CC);
        //dectructor
        virtual ~car();

        void distance(int _km);


        std::string Marka ;
        int * Seri_num ;
        int Emission_km ;

        //value of static variables are accessible for all object
        static int total_Emission ;

    protected:

    private://can not change directly from other class
        std::string *Car_name;
};

#endif // CAR_H
