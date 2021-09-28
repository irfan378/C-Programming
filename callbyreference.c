#include<stdio.h>
void swap(int* x, int* y){
   int temp;
    temp=*x;
    *x=*y;
    *y=temp;

}

int main(){
    int r=10,v=20;
    swap(&r,&v);
    printf("\nValue of r is %d",r);
    printf("\nValue of v is %d",v);
    return 0;
}