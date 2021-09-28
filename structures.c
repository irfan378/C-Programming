#include<stdio.h>
#include<string.h>
struct student
{
    int id;
    int marks;
    char fav_char;
    char name[34];

}harry,ravi,shubam;
struct student harry,ravi,shubam;


/* void print()
{
    printf("%s",harry.name);
}*/
int main(){
    harry.id=1;
    ravi.id=2;
    shubam.id=3;
    ravi.marks=66;
    shubam.marks=46;
    harry.fav_char='p';
    ravi.fav_char='y';
    shubam.fav_char='o';
    strcpy(harry.name,"harry potter student of the year");
    strcpy(shubam.name,"shubam kumar");
    printf("harry got %d marks\n",harry.marks);
    printf("harry's name is %s\n" ,harry.name);
    printf("shubam's name is %s\n" ,shubam.marks);
    printf("shubam's name is %s\n" ,shubam.name);
    // print();
    return 0;
}