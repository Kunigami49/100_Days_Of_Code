//Insert an element in an array at a given position.

#include <stdio.h>

int main() {
    int n, i, element, position;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n + 1]; // Create an array with one extra space for the new element

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to insert: ");
    scanf("%d", &element);

    printf("Enter the position to insert the element (0 to %d): ", n);
    scanf("%d", &position);

    // Validate position
    if(position < 0 || position > n){
        printf("Invalid position!\n");
        return 1;
    }

    // Shift elements to the right to make space for the new element
    for(i = n; i > position; i--) {
        arr[i] = arr[i - 1];
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