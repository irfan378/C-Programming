#include <stdio.h>

int main()
{
    int i;
    printf("Enter a Number\n");
    scanf("%d", &i);
    if (i % 2 == 0)
    {
        printf("The number %d is even\n ", i);
    }
    else
    {
        printf("The number %d is odd\n", i);
    }
    return 0;
}