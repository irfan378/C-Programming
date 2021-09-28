#include <stdio.h>

int main()
{
    char s[100];
    int i, count = 0;
    printf("Enter a string tpo know how many vowels are there\n");
    scanf("%s", &s);
    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == 'A' || s[i] == 'a' || s[i] == 'E' || s[i] == 'e' || s[i] == 'I' || s[i] == 'i' || s[i] == 'o' || s[i] == 'O' || s[i] == 'u' || s[i] == 'U')
        {
            count++;
        }
    }
    if (count == 0)
    {
        printf("No vowels are there\n");
    }
    else
    {
        printf("Number of vowels in %s is %d\n", s, count);
    }

    return 0;
}