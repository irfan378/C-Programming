#include<stdio.h>
void star_pattern()
{
    int a;
    printf("Enter how many stars you want\n");
    scanf("%d",&a);
    for(int i=0;i<a;i++){
        printf("*");
    }
     }   
     int main()
     {
         star_pattern();
         return 0;
     }
     //no argument no value