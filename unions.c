#include<stdio.h>
#include<string.h>

union student
{
    int id;
    int marks;
    char fav_char;
    char name[34];
};
int main(){
    union student s1;
    strcpy(s1.name,"harry");
    s1.fav_char='u';
    s1.id=1;
     s1.marks=45;
    printf("The marks is %d\n",s1.marks);
    printf("The id is %d\n",s1.id);
    printf("The fav_char is %c\n",s1.fav_char);
    printf("The name is %s\n",s1.name);


    
    return 0;
}