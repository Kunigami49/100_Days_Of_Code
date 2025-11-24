//Insert an element in a sorted array at the appropriate position.

#include <stdio.h>

int main() {
    int n, i, j, element, position;

    printf("Enter the number of elements in the sorted array: ");
    scanf("%d", &n);

    int arr[n + 1]; // Create an array with one extra space for the new element

    printf("Enter %d sorted elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to insert: ");
    scanf("%d", &element);

    // Find the position to insert the new element
    position = n; // Default position is at the end
    for(i = 0; i < n; i++) {
        if(arr[i] > element) {
            position = i;
            break;
        }
    }

    // Shift elements to the right to make space for the new element
    for(j = n; j > position; j--) {
        arr[j] = arr[j - 1];
    }

    // Insert the new element
    arr[position] = element;

    printf("The array after insertion is:\n");
    for(i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}