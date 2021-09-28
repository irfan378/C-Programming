#include<stdio.h>

int main(){
    int a,b;
    printf("Enter a\n");
    scanf("%d",&a);
    printf("Enter b\n");
    scanf("%d",&b);
    printf("The value of a is %d and b is %d before swapping\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("The values of a is %d and b is %d after swapping",a,b);
    return 0;
}