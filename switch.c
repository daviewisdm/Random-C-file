#include <stdio.h>
int main()
{
    // Define the variables
    char grade;
    // Get the user's grade
    printf("Enter your grade: ");
    scanf(" %c ", &grade);
    // Check the grade and output the remarks
    switch (grade)
    {
    case 'A':
        printf("Excellent!");
        break;
    case 'B':
        printf("Good!");
        break;
    case 'C':
        printf("Average!");
        break;
    case 'D':
        printf("Needs improvement!");
        break;
    case 'F':
        printf("Fail!");
        break;
    case 'Y':
	printf("Examination Thuggery");
	break;
    default:
        printf("Invalid grade!");
        break;
    }
    return 0;
}
