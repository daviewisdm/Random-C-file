#include <stdio.h>
int main()
{
    int base, exponent, power = 1;
    printf("Enter the base number: ");
    scanf(" %d ", &base);
    printf("Enter the exponent: ");
    scanf(" %d ", &exponent);
    for (int i = 1; i <= exponent; i++)
    {
        power = power * base;
    }
    printf("The power of %d raised to %d is %d ", base, exponent, power);
    return 0;
}
