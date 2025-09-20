//Write a program to calculate the factorial of a number.

#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    long long factorial = 1; // Use long long to handle larger factorials
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    if (n < 0)
    {
        printf("Factorial is not defined for negative numbers.\n");
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            factorial *= i;
        }
        printf("The factorial of %d is: %lld\n", n, factorial);
    }
    return 0;
}