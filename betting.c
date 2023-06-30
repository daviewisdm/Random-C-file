#include <stdio.h>
#include <stdlib.h>
int main()
{
    // Define the variables
    int age;
    char gender;
    // Get the user's age and gender
    printf("Enter your age: ");
    scanf(" %d ", &age);
    printf("Enter your gender (M/F): ");
    scanf(" %c ", &gender);
    // Check if the user is eligible to bet
    if (age < 18 || gender == 'F')
    {
        // The user is not eligible to bet
        printf("You are not eligible to bet.\n");
    }
    else
    {
        // The user is eligible to bet
        printf("You are eligible to bet.\n");
    }
    return 0;
}
