//Write a program to find the product of odd digits of a number.

#include <stdio.h>
int main() {
    int number, digit, product = 1, hasOdd = 0;

    // Input a number from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Process each digit of the number
    while (number > 0) {
        digit = number % 10; // Get the last digit
        if (digit % 2 != 0) { // Check if the digit is odd
            product *= digit; // Multiply to product
            hasOdd = 1; // Mark that we found at least one odd digit
        }
        number /= 10; // Remove the last digit
    }

    // Output the result
    if (hasOdd) {
        printf("The product of odd digits is: %d\n", product);
    } else {
        printf("No odd digits found in the number.\n");
    }

    return 0;
}