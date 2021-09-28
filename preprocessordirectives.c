#include<stdio.h>
// #include"danglingpointer.c"
#define SQUARE(r) r*r
#define PI 3.14
int main(){
    float var=PI;
    int r =4;                                                                   
    printf("The value of pi is %f\n",var);
    printf("The area of the circle is %f\n",PI*SQUARE(r));
    return 0;
}