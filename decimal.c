#include <stdio.h>
int main()
{
    int n, i, rem, bin = 0;
    printf("Enter a decimal number: ");
    scanf(" %d ", &n);
    for (i = 0; n > 0; i++)
    {
        rem = n % 2;
        bin = bin + (rem * pow(10, i));
        n = n / 2;
    }
    printf("The binary equivalent of %d is %d.\n", n, bin);
    return 0;
}
