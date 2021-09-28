#include<stdio.h>

int main(){
    int n=30,prime=0;
    for(int i=2;i<45;i++)
    {
        if(n%i==0){
            prime=1;
            break;
        
        }
        if(prime==1){
            printf("This is not prime number");

        }
        else{
            printf("This is a prime number");
        }
    }
    
    return 0;
}