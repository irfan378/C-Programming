#include<stdio.h>

int main(){
    char input;
    float kmstomiles=0.621;
    float inchestofoot=0.833;
    float cmstoinches=0.393;
    float poundstokgs=0.453;
    float inchestometeres=0.0254;
    float first,second;
    while(1)
    {
        printf("Enter the input character. q to quit\n  1.kms to miles\n 2.inches to foot\n  3.cms to inches\n  4.pounds to kgs\n   5. inches to meteres\n");
        scanf(" %c",&input);
       // printf("The character is %c",input);
        switch (input)
        {
        case 'q':
        
            printf("Quitting the program....");
            break;
            case '1':
            printf("Enter quantity in terms of first unit\n");
            scanf("%f",&first);
            second=first*kmstomiles;
            printf("%f kms is equal to %f in miles\n\n",first,second);
            break;
            case '2':
            printf("Enter quantity in terms of first unit\n");
            scanf("%f",&first);
            second=first*inchestofoot;
            printf("%f inches is equal to %f in foot\n\n",first,second);
            break;
            case '3':
            printf("Enter quantity in terms of first unit\n");
            scanf("%f",&first);
            second=first*cmstoinches;
            printf("%f cms is equal to %f in inches\n\n",first,second);
            break;
            case '4':
            printf("Enter quantity in terms of first unit\n");
            scanf("%f",&first);
            second=first*poundstokgs;
            printf("%f pounds is equal to %f in kgs\n\n",first,second);
            break;
            case '5':
            printf("Enter quantity in terms of first unit\n");
            scanf("%f",&first);
            second=first*inchestometeres;
            printf("%f inches is equal to %f in meteres\n\n",first,second);
            break;
            
            default:
            break;
        }
     
    }
    return 0;
}