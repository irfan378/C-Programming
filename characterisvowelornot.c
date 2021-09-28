#include<stdio.h>

int main(){
    char c;
    printf("Enter a character to know wheather it is vowel or not\n");
    scanf("%c",&c);
    if(c=='A'||c=='a'||c=='E'||c=='e'||c=='I'||c=='i'||c=='o'||c=='O'||c=='u'||c=='U'){
        printf("The character %c is vowel\n",c);
    }
    else{
        printf("The character %c is not a vowel\n",c);
    }
    return 0;
}