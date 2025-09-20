//Write a program to find the product of odd digits of a number.

#include <stdio.h>
#include <math.h>

int main()
{
    int n, product = 1, hasOdd = 0; // hasOdd to check if there are any odd digits
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    if (n < 0)
    {
        printf("Please enter a non-negative number.\n");
    }
    else
    {
        while (n != 0)
        {
            int digit = n % 10; // Get the last digit
            if (digit % 2 != 0) // Check if the digit is odd
            {
                product *= digit; // Multiply it to the product
                hasOdd = 1; // Set hasOdd to true
            }
            n /= 10; // Remove the last digit from n
        }
        if (hasOdd)
        {
            printf("The product of the odd digits is: %d\n", product);
        }
        else
        {
            printf("There are no odd digits in the number.\n");
        }
    }
    return 0;
}