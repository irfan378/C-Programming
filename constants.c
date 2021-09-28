#include<stdio.h>
#define PI 3.14
int main(){
    int a=8;
    const float b=7.33;
    //b=7.22;wrong because b is constant.
    //PI=7.33;wrong because pi is constant.
    printf("%f",PI);
    return 0;
}