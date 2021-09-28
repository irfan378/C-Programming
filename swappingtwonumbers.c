#include <stdio.h>

int main()
{
    int a, b, temp;
    printf("Enter the value of a\n");
    scanf("%d", &a);
    printf("Enter the value of b\n");
    scanf("%d", &b);
    printf("Before swapping");
    printf("a=%d\n", a);
    printf("b=%d\n", b);
    temp = a;
    a = b;
    b = temp;

    printf("After swapping\n");
    printf("a=%d\n", a);
    printf("b=%d\n", b);
    return 0;
}