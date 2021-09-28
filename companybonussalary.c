#include<stdio.h>
#include<string.h>
 int main(){
    int i,j;
    float salary,bonus;
    char gender;
    printf("Enter M for Male and F for female\n");
    scanf("%c",&gender);
    printf("Enter salary\n");
    scanf("%f",&salary);
    if (gender=='M'||gender=='m')
    {
        if (salary>10000)
        {
            bonus=(float)(salary*0.05);
        }
        else{
            bonus=(float)(salary*0.07);
        }
        
    }
      if (gender=='F'||gender=='f')
    {
        if (salary>10000)
        {
            bonus=(float)(salary*0.1);
        }
        else{
            bonus=(float)(salary*0.12);
        }
        
    }
    salary+=bonus;
    printf("Bonus=%f\n Salary=%f\n",bonus,salary);
    return 0;
}