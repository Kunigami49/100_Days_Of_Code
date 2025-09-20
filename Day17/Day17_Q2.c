//Write a program to check if a number is prime.

#include <stdio.h>
#include <math.h>

int main()
{
    int n, isPrime = 1; // Assume the number is prime
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    if (n <= 1)
    {
        printf("Please enter a number greater than 1.\n");
    }
    else
    {
        for (int i = 2; i <= sqrt(n); i++) // Check divisibility from 2 to sqrt(n)
        {
            if (n % i == 0) // If n is divisible by i, it's not prime
            {
                isPrime = 0; // Set isPrime to false
                break; // No need to check further
            }
        }
        if (isPrime)
        {
            printf("%d is a prime number.\n", n);
        }
        else
        {
            printf("%d is not a prime number.\n", n);
        }
    }
    return 0;
}