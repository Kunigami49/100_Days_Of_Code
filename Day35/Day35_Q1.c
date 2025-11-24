//Find the second largest element in an array.

#include <stdio.h>
int main() {
    int n, i;
    int first, second;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    if(n < 2) {
        printf("Array must have at least two elements to find the second largest.\n");
        return 1;
    }

    int arr[n]; // Create an array to hold the elements

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    first = second = -2147483648; // Initialize to minimum integer value

    for(i = 0; i < n; i++) {
        if(arr[i] > first) {
            second = first;
            first = arr[i];
        } else if(arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }

    if(second == -2147483648) {
        printf("There is no second largest element (all elements may be equal).\n");
    } else {
        printf("The second largest element is: %d\n", second);
    }

    return 0;
}