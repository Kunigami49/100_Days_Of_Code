//Write a program to print the product of even numbers from 1 to n.

#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    long long product = 1; // Use long long to handle larger products
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    if (n < 1)
    {
        printf("Please enter a number greater than 0.\n");
    }
    else
    {
        for (int i = 2; i <= n; i += 2) // Start from 2 and increment by 2 to get even numbers
        {
            product *= i;
        }
        printf("The product of even numbers from 1 to %d is: %lld\n", n, product);
    }
    return 0;
}