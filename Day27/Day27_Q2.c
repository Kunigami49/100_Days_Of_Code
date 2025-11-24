/* Write a program to print the following pattern:

   *
  ***
 *****
*******
 *****
  ***
   *
*/

#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of rows for the diamond pattern (odd number): ");
    scanf("%d", &n);
    if (n < 1 || n % 2 == 0) {
        printf("Please enter a positive odd number greater than 0.\n");
    } else {
        int mid = n / 2 + 1; // Middle row index

        // Upper half of the diamond
        for (int i = 1; i <= mid; i++) {
            for (int j = 1; j <= (mid - i); j++) { // Print leading spaces
                printf(" ");
            }
            for (int k = 1; k <= (2 * i - 1); k++) { // Print stars
                printf("*");
            }
            printf("\n"); // Move to the next line after printing one row
        }

        // Lower half of the diamond
        for (int i = mid - 1; i >= 1; i--) {
            for (int j = 1; j <= (mid - i); j++) { // Print leading spaces
                printf(" ");
            }
            for (int k = 1; k <= (2 * i - 1); k++) { // Print stars
                printf("*");
            }
            printf("\n"); // Move to the next line after printing one row
        }
    }
    return 0;
}