/*Write a program to print the following pattern:
5
45
345
2345
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
            for (int j = n - i + 1; j <= n; j++) // Loop for each column in the row
            {
                printf("%d", j); // Print number without newline
            }
            printf("\n"); // Move to the next line after printing one row
        }
    }
    return 0;
}