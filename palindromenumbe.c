#include<stdio.h>
#include<stdlib.h>
int ispalindrome(int num){
    int reversed=0;
    int originalnumber=num; 
    while (num!=0)
    {
        reversed=reversed*10+num%10;
        num=num/10;
    }
    printf("The reversed number is %d\n");
    if (originalnumber==reversed)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
  

}
int main(){
    int number;
    printf("Enter a number to check wheather it is a palindrome or not\n");
    scanf("%d",&number);
    if (ispalindrome(number))
    {
        printf("This is a palindrome number \n");

    }
    else
    {
        printf("This is not a palindrome number \n");
    }
    

    
    return 0;
}