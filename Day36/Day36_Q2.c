//Find the sum of all elements in a matrix.

#include <stdio.h>
int main() {
    int rows, cols, i, j, sum = 0;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);
    int matrix[rows][cols]; // Create a 2D array to hold the matrix elements
    printf("Enter the elements of the matrix:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j]; // Add each element to sum
        }
    }
    printf("The sum of all elements in the matrix is: %d\n", sum);
    return 0;
}