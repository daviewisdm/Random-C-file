#include <stdio.h>
#include <math.h>
int main()
{
    // Define the variables
    float a, b, c, d, x1, x2;
    // Get the coefficients of the quadratic equation
    printf("Enter the coefficients of the quadratic equation: ");
    scanf(" %f %f %f ", &a, &b, &c);
    // Calculate the discriminant
    d = b * b - 4 * a * c;
    // Check if the discriminant is positive
    if (d > 0)
    {
        // The quadratic equation has two real roots
        x1 = (-b + sqrt(d)) / (2 * a);
        x2 = (-b - sqrt(d)) / (2 * a);
        // Print the roots
        printf("The roots of the quadratic equation are %f and %f.\n", x1, x2);
    }
    else if (d == 0)
    {
        // The quadratic equation has one real root
        x1 = -b / (2 * a);
        // Print the root
        printf("The root of the quadratic equation is %f.\n", x1);
    }
    else
    {
        // The quadratic equation has no real roots
        printf("The quadratic equation has no real roots.\n");
    }
    return 0;
}
