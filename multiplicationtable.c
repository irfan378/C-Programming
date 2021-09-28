#include<stdio.h>

int main(){
    int a;
    printf("Enter the number you want multiplicatiion of:\n");
    scanf("%d",&a);
     for(int i=0;i<11;i++)
    {
        printf("%d X %d = %d\n",a,i,a*i);
    }
    return 0;
}