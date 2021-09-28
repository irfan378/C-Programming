#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int generaterandomnumber(int n){
    srand(time(NULL));
    return rand() % n;
}
int greater(char char1, char char2){
    if(char1==char2){
        return -1;
    }
    if ((char1=='r')&&(char2=='s')){
        return 1;

    }
    else if((char2='r')&&(char1='s'))
    {
        return 0;
    }
    if ((char1=='p')&&(char2=='r')){
        return 1;

    }
    else if ((char2=='p')&&(char1=='r'))
    {
        return 0;
    }
    if ((char1=='s')&&(char2=='p')){
        return 1;

    }
    else if((char2=='s')&&(char1=='p'))
    {
        return 0;
    }

}
int main(){
    int playerscore=0,compscore=0,temp;
    char playerchar,compchar;
    char dict[]={'r','p','s'};
    printf("Welcome to the rock paper scissor \n ");
    for (int i = 0; i < 3; i++)
    {
        printf("\nplayer's turn:\n");
        printf("choose 1 for rock,2 for paper snd 3 for scissor\n");
        scanf("%d",&temp);
        getchar();
        playerchar=dict[temp-1];
        printf("you choose %c\n",playerchar);    
        
        printf("computer's turn:\n");
        temp=generaterandomnumber(3)+1;
        compchar=dict[temp-1];    
        printf("Cpu choose %c\n",compchar);
    
    if(greater(compchar,playerchar)==1){
        compscore+=1;
        printf("CPU got it \n");
    }
    else if(greater(compchar,playerchar)==-1){
        compscore+=1;
        playerscore+=1;
        printf("It's a draw\n");
    }
    else
    {
        playerscore+=1;
        printf("you got it\n");
    }
    printf("YOU: %d \n CPU: %d",playerscore,compscore);
    
}

if(playerscore>compscore){
    printf("You win \n");
}
else if(playerscore<compscore)
{
    printf("Cpu win the game\n");
}
else
{
    printf("It's a draw\n");
}

    return 0;
}