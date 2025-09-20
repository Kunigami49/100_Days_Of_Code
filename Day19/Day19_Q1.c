//Write a program to find the LCM of two numbers.

#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, lcm;
    printf("Enter two positive integers: ");
    scanf("%d %d", &a, &b);
    if (a < 1 || b < 1)
    {
        printf("Please enter numbers greater than 0.\n");
    }
    else
    {
        // Calculate LCM using the formula: LCM(a, b) = (a * b) / HCF(a, b)
        int x = a, y = b;
        while (y != 0)
        {
            int temp = y;
            y = x % y;
            x = temp;
        }
        int hcf = x; // The HCF is stored in x after the loop
        lcm = (a * b) / hcf; // Calculate LCM
        printf("The LCM of %d and %d is: %d\n", a, b, lcm);
    }
    return 0;
}