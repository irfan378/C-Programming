#include <stdio.h>
int getfactorial(int number);
int main()
{
    int number, factorial;
    printf("Enter a number for knowing it's factorial\n");
    scanf("%d", &number);
    factorial = getfactorial(number);
    printf("%d!=%d\n", number, factorial);
    return 0;
}
int getfactorial(int number)
{
    if (number > 0)
    {
        return number * getfactorial(number - 1);
    }
    else
    {
        return 1;
    }
}