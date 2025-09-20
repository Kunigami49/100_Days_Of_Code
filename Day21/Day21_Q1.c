//Write a program to swap the first and last digit of a number.

#include <stdio.h>
#include <math.h>   

int main()
{
    int n, firstDigit, lastDigit, numDigits, middlePart, swappedNumber;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    if (n < 0)
    {
        printf("Please enter a non-negative number.\n");
    }
    else
    {
        lastDigit = n % 10; // Get the last digit
        firstDigit = n; // Initialize firstDigit to n
        numDigits = 0;

        // Find the first digit and count the number of digits
        while (firstDigit >= 10)
        {
            firstDigit /= 10;
            numDigits++;
        }
        numDigits++; // Increment to account for the first digit

        // Remove the first and last digits from n to get the middle part
        middlePart = (n % (int)pow(10, numDigits - 1)) / 10;

        // Construct the new number with swapped digits
        swappedNumber = lastDigit * (int)pow(10, numDigits - 1) + middlePart * 10 + firstDigit;

        printf("The number after swapping the first and last digits is: %d\n", swappedNumber);
    }
    return 0;
}