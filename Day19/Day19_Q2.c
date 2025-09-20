//Write a program to find the sum of digits of a number.

#include <stdio.h>
int main() {
    int number, sum = 0, digit;

    // Input a number from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Calculate the sum of digits
    while (number != 0) {
        digit = number % 10; // Get the last digit
        sum += digit;        // Add it to the sum
        number /= 10;        // Remove the last digit
    }

    // Output the result
    printf("The sum of digits is: %d\n", sum);

    return 0;
}