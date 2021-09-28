#include<stdio.h>
void sum(int z);

int main(){
    int z;
    sum(z);
    
    return 0;
}
void sum(int z)
{
    int a=2,b=5;
    z=a+b;
    printf("%d",z);
}
//Argument passed but no return value