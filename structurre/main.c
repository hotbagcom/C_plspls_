#include <stdio.h>
#include <stdlib.h>
//#include "definition.h"
typedef union{
    unsigned char all;
struct{
        unsigned char doo:1;
        unsigned char re :1;
        unsigned char mi :1;
        unsigned char fa :1;
        unsigned char sol:1;
        unsigned char la :1;
        unsigned char si :1;
        unsigned char kdo:1;

}X;
}note;
int main()
{
    note nota[5];
    nota[0].X.doo=1;
    unsigned char ii,kk;
    for(ii=0;ii<5;ii++){
        for(kk=0;kk<8;kk++)
            printf("%d ",(nota[ii].all>>kk)&0x01);
        printf("\n");
    }


    return 0;
}
