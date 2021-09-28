#include<stdio.h>
#define PI 3.142
int main(){
    float r,a;
    printf("Enter the radius:\n");
    scanf("%f",&r);
    a=PI*r*r;
    printf("Area of circle is %.2f",a);
    return 0;
}