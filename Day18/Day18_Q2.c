//Write a program to find the HCF (GCD) of two numbers.

#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, hcf;
    printf("Enter two positive integers: ");
    scanf("%d %d", &a, &b);
    if (a < 1 || b < 1)
    {
        printf("Please enter numbers greater than 0.\n");
    }
    else
    {
        // Using the Euclidean algorithm to find HCF
        int x = a, y = b;
        while (y != 0)
        {
            int temp = y;
            y = x % y;
            x = temp;
        }
        hcf = x; // The HCF is stored in x after the loop
        printf("The HCF (GCD) of %d and %d is: %d\n", a, b, hcf);
    }
    return 0;
}