//Write a program to check if a number is a palindrome.

#include <stdio.h>
#include <math.h>

int main()
{
    int n, originalNumber, reversedNumber = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    if (n < 0)
    {
        printf("Please enter a non-negative number.\n");
    }
    else
    {
        originalNumber = n; // Store the original number to compare later
        while (n != 0)
        {
            int digit = n % 10; // Get the last digit
            reversedNumber = reversedNumber * 10 + digit; // Append it to the reversed number
            n /= 10; // Remove the last digit from n
        }
        if (originalNumber == reversedNumber)
        {
            printf("%d is a palindrome.\n", originalNumber);
        }
        else
        {
            printf("%d is not a palindrome.\n", originalNumber);
        }
    }
    return 0;
}