#include<stdio.h>
struct driver
{
    char name[34];
    char dlno[45];
    char route[47];
    int kms;
};

int main(){
    struct driver d1,d2,d3;
    
    printf("Enter the details of first driver\n");
    printf("Enter the name of first driver\n");
    scanf("%s",&d1.name);
    printf("Enter the dlno of first driver\n");
    scanf("%s",&d1.dlno);
    printf("Enter the route of first driver\n");
    scanf("%s",&d1.route);
    printf("Enter the kms of first driver\n");
    scanf("%d",&d1.kms); 
    printf("Enter the details of second driver\n");
    printf("Enter the name of second driver\n");
    scanf("%s",&d2.name);
    printf("Enter the dlno of second driver\n");
    scanf("%s",&d2.dlno);
    printf("Enter the route of second driver\n");
    scanf("%s",&d2.route);
    printf("Enter the kms of second driver\n");
    scanf("%d",&d2.kms); 
    printf("Enter the details of third driver\n");
    printf("Enter the name of third driver\n");
    scanf("%s",&d3.name);
    printf("Enter the dlno of third driver\n");
    scanf("%s",&d3.dlno);
    printf("Enter the route of third driver\n");
    scanf("%s",&d3.route);
    printf("Enter the kms of third driver\n");
    scanf("%d",&d3.kms); 
    printf("printing the information of drivers:\n");
    
    printf("For driver no 1 name is %s\n",d1.name);
    printf("For driver no 1 dlno is %s\n",d1.dlno);
    printf("For driver no 1 route is %s\n",d1.route);
    printf("For driver no 1 kms is %d\n",d1.kms);

    printf("For driver no 2 name is %s\n",d2.name);
    printf("For driver no 2 dlno is %s\n",d2.dlno);
    printf("For driver no 2 route is %s\n",d2.route);
    printf("For driver no 2 kms is %s\n",d2.kms);
    
    printf("For driver no 3 name is %s\n",d3.name);
    printf("For driver no 3 dlno is %s\n",d3.dlno);
    printf("For driver no 3 route is %s\n",d3.route);
    printf("For driver no 3 kms is %s\n",d3.kms);
    return 0;
}