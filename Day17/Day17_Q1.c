//Write a program to check if a number is an Armstrong number.

#include <stdio.h>
#include <math.h>

int main()
{
    int n, originalNumber, sum = 0, digits = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    if (n < 0)
    {
        printf("Please enter a non-negative number.\n");
    }
    else
    {
        originalNumber = n; // Store the original number to compare later
        // Count the number of digits
        while (originalNumber != 0)
        {
            originalNumber /= 10;
            digits++;
        }
        originalNumber = n; // Reset originalNumber to n
        // Calculate the sum of the digits raised to the power of 'digits'
        while (n != 0)
        {
            int digit = n % 10; // Get the last digit
            sum += pow(digit, digits); // Raise it to the power of 'digits' and add to sum
            n /= 10; // Remove the last digit from n
        }
        if (sum == originalNumber)
        {
            printf("%d is an Armstrong number.\n", originalNumber);
        }
        else
        {
            printf("%d is not an Armstrong number.\n", originalNumber);
        }
    }
    return 0;
}