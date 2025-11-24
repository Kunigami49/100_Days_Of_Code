//Delete an element from an array.

#include <stdio.h>
int main() {
    int n, i, position;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n]; // Create an array to hold the elements

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the position to delete the element (0 to %d): ", n - 1);
    scanf("%d", &position);

    // Validate position
    if(position < 0 || position >= n){
        printf("Invalid position!\n");
        return 1;
    }

    // Shift elements to the left to fill the gap created by deletion
    for(i = position; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    printf("The array after deletion is:\n");
    for(i = 0; i < n - 1; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}