//Write a program to find the sum of digits of a number.

#include <stdio.h>
#include <math.h>

int main()
{
    int n, sum = 0;
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
            sum += digit; // Add it to the sum
            n /= 10; // Remove the last digit from n
        }
        printf("The sum of the digits is: %d\n", sum);
    }
    return 0;
}