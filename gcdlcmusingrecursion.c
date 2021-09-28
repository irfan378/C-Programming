#include <stdio.h>
int getgcd(int temp1, int temp2);
int main()
{
    int num1, num2, gcd, lcm, x;
    printf("Enter number 1 and number 2\n");
    scanf("%d%d", &num1, &num2);
    gcd = getgcd(num1, num2);
    lcm = (num1 * num2) / gcd;
    printf("gcd is %d\n", gcd);
    printf("lcm is %d", lcm);
    return 0;
}
int getgcd(int temp1, int temp2)
{
    if (temp2 != 0)
    {
        getgcd(temp2, temp1 % temp2);
    }
    else
    {
        return (temp1);
    }
}