#include<stdio.h>
int sum(int a,int b){
    return a+b;
}
void greet(){
    printf("Hello world my user good morning\n");
}
int main(){
    printf("The sum of 1 and 2 is %d\n",sum(1,2));
    int(*fptr)(int,int);
    fptr=&sum;
    int d=(*fptr)(4,6);
    printf("The value of d is %d",d);
    return 0;
}