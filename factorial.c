#include<stdio.h>

int main(){
    int number,factorial=1,i;
    printf("Enter a number for knowing it's factorial\n");
    scanf("%d",&number);
    for(int i=1;i<=number;i++){
        factorial=factorial*i;
    }
    printf("%d!=%d",number,factorial);
    return 0;
}