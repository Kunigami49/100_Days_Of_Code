//Create Employee structure with nested Date structure for joining date and print details.

#include <stdio.h>
struct Date {
    int day;
    int month;
    int year;
};
struct Employee {
    char name[50];
    int id;
    struct Date joiningDate;
};
void printEmployee(struct Employee emp) {
    printf("Employee Name: %s\n", emp.name);
    printf("Employee ID: %d\n", emp.id);
    printf("Joining Date: %02d/%02d/%04d\n", emp.joiningDate.day, emp.joiningDate.month, emp.joiningDate.year);
}
int main() {
    struct Employee emp;
    printf("Enter Employee Name: ");
    fgets(emp.name, sizeof(emp.name), stdin);
    // Remove newline character from fgets input
    size_t len = strlen(emp.name);
    if (len > 0 && emp.name[len - 1] == '\n') {
        emp.name[len - 1] = '\0';
    }
    printf("Enter Employee ID: ");
    scanf("%d", &emp.id);
    printf("Enter Joining Date (day month year): ");
    scanf("%d %d %d", &emp.joiningDate.day, &emp.joiningDate.month, &emp.joiningDate.year);
    printEmployee(emp);
    return 0;
}