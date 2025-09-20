//Write a program to take a number as input and print its equivalent binary representation.

#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    printf("Enter a non-negative integer: ");
    scanf("%d", &n);
    if (n < 0)
    {
        printf("Please enter a non-negative number.\n");
    }
    else
    {
        if (n == 0)
        {
            printf("The binary representation of 0 is: 0\n");
            return 0;
        }
        int binary[32]; // Array to store binary digits, assuming a 32-bit integer
        int index = 0;
        while (n > 0)
        {
            binary[index] = n % 2; // Store the remainder (0 or 1)
            n /= 2; // Divide n by 2
            index++;
        }
        printf("The binary representation is: ");
        for (int i = index - 1; i >= 0; i--) // Print the binary digits in reverse order
        {
            printf("%d", binary[i]);
        }
        printf("\n");
    }
    return 0;
}