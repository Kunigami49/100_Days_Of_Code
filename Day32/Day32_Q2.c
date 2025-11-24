//Find the digit that occurs the most times in an integer number.

#include <stdio.h>
#include <string.h>

int main() {
    char number[20];
    int count[10] = {0};
    int i, maxCount = 0, mostFrequentDigit;

    printf("Enter an integer number: ");
    scanf("%s", number);

    // Count occurrences of each digit
    for(i = 0; i < strlen(number); i++) {
        if(number[i] >= '0' && number[i] <= '9') {
            count[number[i] - '0']++;
        }
    }

    // Find the digit with the maximum count
    for(i = 0; i < 10; i++) {
        if(count[i] > maxCount) {
            maxCount = count[i];
            mostFrequentDigit = i;
        }
    }

    printf("The digit that occurs the most is: %d (occurs %d times)\n", mostFrequentDigit, maxCount);

    return 0;
}