//Write a program to check if a number is a perfect number.

#include <stdio.h>
#include <math.h>   

int main()
{
    int n, sumOfDivisors = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    if (n < 1)
    {
        printf("Please enter a number greater than 0.\n");
    }
    else
    {
        // Calculate the sum of proper divisors
        for (int i = 1; i <= n / 2; i++) // Check divisors up to n/2
        {
            if (n % i == 0) // If i divides n completely, it's a proper divisor
            {
                sumOfDivisors += i; // Add it to the sum
            }
        }
        // A perfect number is equal to the sum of its proper divisors
        if (sumOfDivisors == n)
        {
            printf("%d is a perfect number.\n", n);
        }
        else
        {
            printf("%d is not a perfect number.\n", n);
        }
    }
    return 0;
}