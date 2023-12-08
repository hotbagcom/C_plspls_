#include <stdio.h>
#include <stdlib.h>
#include <complex.h>
int square();
void erase();
void conjugate();

int main()
{

    int a = 4;
    char b = 'c';
    printf("%d\n",'a');
    printf("%c \n", b );
    _Bool d = 0;
    float e = 3.5*I;
    e=e+25;
    double f = 123.58586;
    printf("%f\n",f);
    int g[5] = {0, 1, 2, 3, 4};
    char h[] = "Arif";
    printf("%d\n",b);
    printf("square of %d is %d \n" , g[a], square(g[a]) );
    erase(h);
    conjugate( e );
    return 0;

}
square( int j ){
return j*j;
}
erase(char k ){
return sizeof k ;

}
conjugate(float m){
printf("conjugate of \n %f is \n %f %fi\n", m ,creal(m), (-1)*cimag(m));
return 0;
}
