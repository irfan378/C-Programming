#include<stdio.h>

int main(){
     int marks[2][4]={{45,32,33,44},{3,2,3,3}};
                      
    // marks[0]=34;
    // printf("Marks of student 1 is %d\n",marks[0]);
    // marks[0]=4;
    // marks[1]=24;
    // marks[2]=44;
    // marks[3]=34;
    // printf("Marks of student 1 is %d\n",marks[0]);
    for (int i = 0; i < 2; i++)
     {
         for(int j=0;j<4;j++){
         
    //     printf("Enter the value of %d of the array\n",i);
    //     scanf("%d",&marks[i]);
      //  printf("The value of %d,%d element of the array is %d\n",i,j,marks[i][j]);
        printf("%d\t",marks[i][j]);
         }
         printf("\n\n");
    }
    
  
       return 0;
}