#include<stdio.h>
#include"temp.c"
int myfunc(int a,int b)
{
    static int myvar;
    myvar++;
    printf("The myvar is %d\n",myvar);
    return myvar;
}
int main(){
    int a;
    // int a;
    register int myvar=myfunc(3,5);
    myvar=myfunc(3,5);
    myvar=myfunc(3,5);
    myvar=myfunc(3,5);
    // printf("The  myvar is %d\n ",myvar);

    
    return 0;
}