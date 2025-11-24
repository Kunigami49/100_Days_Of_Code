/*Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

* 
*/

#include <stdio.h>

int main() {
    // number of stars in each group
    int groups[] = {1, 3, 5, 3, 1};
    int n = sizeof(groups) / sizeof(groups[0]);

    // Outer loop for groups
    for (int i = 0; i < n; i++) {
        // Inner loop for stars in each group
        for (int j = 1; j <= groups[i]; j++) {
            printf("*\n");
        }
        printf("\n");  // blank line between groups
    }

    return 0;
}