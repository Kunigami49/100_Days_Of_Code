/*Write a program to print the following pattern:
1
12
123
1234
12345*/

#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    printf("Enter the number of rows for the right-angled triangle pattern: ");
    scanf("%d", &n);
    if (n < 1)
    {
        printf("Please enter a number greater than 0.\n");
    }
    else
    {
        for (int i = 1; i <= n; i++) // Loop for each row
        {
            for (int j = 1; j <= i; j++) // Loop for each column in the row
            {
                printf("%d", j); // Print number without newline
            }
            printf("\n"); // Move to the next line after printing one row
        }
    }
    return 0;
}