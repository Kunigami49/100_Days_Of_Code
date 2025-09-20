//Write a program to print all factors of a given number.

#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    if (n < 1)
    {
        printf("Please enter a number greater than 0.\n");
    }
    else
    {
        printf("Factors of %d are:\n", n);
        for (int i = 1; i <= n; i++)
        {
            if (n % i == 0) // If i divides n completely, it's a factor
            {
                printf("%d\n", i);
            }
        }
    }
    return 0;
}