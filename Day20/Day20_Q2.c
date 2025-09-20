//Write a program to find the 1’s complement of a binary number and print it.

#include <stdio.h>
#include <math.h>

int main()
{
    long long binaryNumber, originalNumber, onesComplement = 0, placeValue = 1;
    printf("Enter a binary number: ");
    scanf("%lld", &binaryNumber);
    originalNumber = binaryNumber; // Store the original number to display later
    // Calculate the 1's complement
    while (binaryNumber != 0)
    {
        int digit = binaryNumber % 10; // Get the last digit
        int flippedDigit = (digit == 0) ? 1 : 0; // Flip the digit (0 -> 1, 1 -> 0)
        onesComplement += flippedDigit * placeValue; // Add the flipped digit to the result
        placeValue *= 10; // Move to the next place value (units, tens, hundreds, etc.)
        binaryNumber /= 10; // Remove the last digit from binaryNumber
    }
    printf("The 1's complement of %lld is: %lld\n", originalNumber, onesComplement);
    return 0;
}