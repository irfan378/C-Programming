#include<stdio.h>

int main(){
    int r,p;
    float a;
    printf("Enter the value a:\n");
    scanf("%f",&a);
    r=a;
    printf("\nTotal rupees:%d\n",r);
    p=(a-r)*100;
    printf("\nTotal paisa:%d\n",p);
    return 0;
}