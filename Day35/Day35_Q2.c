//Rotate an array to the right by k positions.

#include <stdio.h>

void rotateRight(int arr[], int n, int k) {
    k = k % n;  // In case k > n
    int temp[k];

    // Step 1: Store last k elements in temp
    for (int i = 0; i < k; i++) {
        temp[i] = arr[n - k + i];
    }

    // Step 2: Shift the remaining elements to the right
    for (int i = n - 1; i >= k; i--) {
        arr[i] = arr[i - k];
    }

    // Step 3: Copy back the k elements from temp to the beginning
    for (int i = 0; i < k; i++) {
        arr[i] = temp[i];
    }
}

int main() {
    int n, k;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter k: ");
    scanf("%d", &k);

    rotateRight(arr, n, k);

    printf("Array after rotation:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}