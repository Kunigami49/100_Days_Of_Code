//Use pointer to struct to modify and display data using -> operator.

#include <stdio.h>
struct Employee {
    int empId;
    char empName[50];
    float empSalary;
};

int main() {
    struct Employee emp;
    struct Employee *empPtr;

    // Assign the address of emp to empPtr
    empPtr = &emp;

    // Input employee details using pointer
    printf("Enter Employee ID: ");
    scanf("%d", &empPtr->empId);
    printf("Enter Employee Name: ");
    scanf("%s", empPtr->empName);
    printf("Enter Employee Salary: ");
    scanf("%f", &empPtr->empSalary);

    // Display employee details using pointer
    printf("\nEmployee Details:\n");
    printf("ID: %d\n", empPtr->empId);
    printf("Name: %s\n", empPtr->empName);
    printf("Salary: %.2f\n", empPtr->empSalary);

    return 0;
}