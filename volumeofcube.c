#include<stdio.h>

int main(){
    int l,b,h,v;
    printf("Enter the value of l:\n");
    scanf("%d",&l);
    printf("Enter the value of b:\n");
    scanf("%d",&b);
    printf("Enter the value of h:\n");
    scanf("%d",&h);
    v=l*b*h;
    printf("Volume of cube: %d",v);
    
    return 0;
}