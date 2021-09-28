#include<stdio.h>

int main(){
    int a,b,c;
    printf("Enter a\n");
    scanf("%d",&a);
      printf("Enter b\n");
    scanf("%d",&b);
    printf("The values of a is %d and b is %d before swapping\n",a,b);
    c=a;
    a=b;
    b=c;
    printf("The values of a is %d and b is %d after swapping\n",a,b);
    return 0;
}