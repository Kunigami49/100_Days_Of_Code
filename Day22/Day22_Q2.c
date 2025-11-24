//Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

#include<stdio.h>
#include<math.h>
int main() {
    int n;
    double sum = 0.0;
    printf("Enter the number of terms (n): ");
    scanf("%d", &n);
    if (n < 1) {
        printf("Please enter a number greater than 0.\n");
    } else {
        for (int i = 0; i < n; i++) {
            int numerator = 2 * i + 1; // Odd numbers: 1, 3, 5, 7, ...
            int denominator = numerator + 1; // Even numbers: 2, 4, 6, 8, ...
            sum += (double)numerator / denominator; // Add the fraction to the sum
        }
        printf("The sum of the series up to %d terms is: %.2f\n", n, sum);
    }
    return 0;
}