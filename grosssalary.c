#include <stdio.h>

int main()
{
    float basicpay, dearnessallowance, houserentallowance, grosssalary, providentfund;
    printf("Enter Basic Pay\n");
    scanf("%f", &basicpay);
    houserentallowance = 0.2 * basicpay;
    dearnessallowance = 0.4 * basicpay;
    providentfund = 0.12 * basicpay;
    grosssalary = basicpay + dearnessallowance + houserentallowance + providentfund;
    printf("Basic Pay=%.2f\n", basicpay);
    printf("Dearness Allowance =%.2f\n", dearnessallowance);
    printf("House Rent Allowance=%.2f\n", houserentallowance);
    printf("Provident Fund=%.2f\n", providentfund);
    printf("Gross salary=%.2f\n", grosssalary);
    return 0;
}