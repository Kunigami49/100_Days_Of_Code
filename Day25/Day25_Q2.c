/*Write a program to print the following pattern:
*****
 ****
  ***
   **
    * */

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
            for (int j = 1; j < i; j++) // Loop for spaces in the row
            {
                printf(" "); // Print space without newline
            }
            for (int k = n - i + 1; k >= 1; k--) // Loop for stars in the row
            {
                printf("*"); // Print star without newline
            }
            printf("\n"); // Move to the next line after printing one row
        }
    }
    return 0;
}
