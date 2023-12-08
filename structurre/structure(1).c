#include <stdio.h>
#include <stdlib.h>
#include "definition.h"

typedef struct{
    struct{
        uchar_t SEN0:1;
        uchar_t SEN1:1;
        uchar_t SEN2:1;
        uchar_t SEN6:1;
        uchar_t reserved:4;

    }IIC_SSPCON2;
    struct {
        uchar_t SEN44:1;
        uchar_t SEN34:1; 0  1
        uchar_t SEN33:1; 0  0
        uchar_t SEN22:1; 0  1
        uchar_t SEN11:4; 0  1
    }OSCON;

}MCUREGISTER_t;

typedef struct school{

uint8_t degree : 4;
unsigned int8_t group : 6;
unsigned char name[20] :

}school;


int main(){
    MCUREGISTER_t MCUREGISTER;
    MCUREGISTER.IIC_SSPCON2.SEN2=1;
    MCUREGISTER.OSCON.SEN11=7;

    return 0;
}
