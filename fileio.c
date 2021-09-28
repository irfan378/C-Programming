#include<stdio.h>
int main(){
    FILE *ptr =NULL;
    char string[64]="This content was produced by myfile";
    // Reading a file
//     ptr=fopen("myfile.txt","r");
//     fscanf(ptr,"%s",string);
//     printf("The content of this file is %s\n",string);

//writing a file
ptr=fopen("myfile.txt","a");
fprintf(ptr,"%s",string);
 return 0;
}
