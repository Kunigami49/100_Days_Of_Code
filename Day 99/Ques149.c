//Use malloc() to allocate structure memory dynamically and print details.

#include <stdio.h>
#include <stdlib.h>

struct Student {
    int id;
    char name[50];
    float marks;
};
int main() {
    struct Student *studentPtr;

    // Allocate memory for one Student structure
    studentPtr = (struct Student *)malloc(sizeof(struct Student));
    if (studentPtr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Input student details
    printf("Enter Student ID: ");
    scanf("%d", &studentPtr->id);
    printf("Enter Student Name: ");
    scanf("%s", studentPtr->name);
    printf("Enter Student Marks: ");
    scanf("%f", &studentPtr->marks);

    // Print student details
    printf("\nStudent Details:\n");
    printf("ID: %d\n", studentPtr->id);
    printf("Name: %s\n", studentPtr->name);
    printf("Marks: %.2f\n", studentPtr->marks);

    // Free allocated memory
    free(studentPtr);

    return 0;
}