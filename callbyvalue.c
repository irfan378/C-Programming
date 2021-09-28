#include<stdio.h>
void swap(int x,int y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
}
int main(){
    int r=10, v=20;
    swap(r,v);
    printf("value of r is %d\n",r);
    printf("value of v is %d\n",v);

    return 0;
}