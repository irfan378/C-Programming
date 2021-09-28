#include<stdio.h>

int main(){
    int a,b,r;
    printf("Enter the value a:");
    scanf("%d",&a);
    b=a/30;
    printf("Month:%d\n",b);
    r=a%30;
    printf("Remaining days:%d",r);
    return 0;
}