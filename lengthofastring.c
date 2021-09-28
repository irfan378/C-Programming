#include <stdio.h>

int main()
{
    char str[100];
    int i, len = 0;
    printf("Enter a string to know the length\n");
    scanf("%s", &str);
    for (i = 0; str[i] != '\0'; i++)
    {
        len++;
    }
    printf("The length of %s is %d\n", str, len);
    return 0;
}