#include<stdio.h>

int sum()
{
    int x,y,z;
    printf("Enter number 1: \t");
    scanf("%d",&x);
    printf("\n Enter number 2: \t");
    scanf("%d",&y);
    z=x+y;
    printf("%d",z);
    return z;
}
int main(){ 
    int x,y,z;
    z=sum();
    return 0;
}
//no arguments passed but a return value

