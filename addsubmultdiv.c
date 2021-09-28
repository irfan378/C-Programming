#include<stdio.h>

int main(){
    int a,b,c;
    float d;
    printf("Enter number 1 and number 2:\n");
    scanf("%d %d",&a,&b);
    c=a+b;
    printf("%d+%d=%d\n",a,b,c);
    c=a-b;
    printf("%d-%d=%d\n",a,b,c);
    c=a*b;
    printf("%dx%d=%d\n",a,b,c);
    c=(float)a/b;
    printf("%d/%d=%d\n",a,b,c);
    c=a%b;
    printf("%d%d=%d",a,b,c);
    return 0;
}