//Write a program to reverse a given number.

#include <stdio.h>
#include <math.h>

int main()
{
    int n, reversedNumber = 0;
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
            reversedNumber = reversedNumber * 10 + digit; // Append it to the reversed number
            n /= 10; // Remove the last digit from n
        }
        printf("The reversed number is: %d\n", reversedNumber);
    }
    return 0;
}