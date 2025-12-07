//Store employee data in a binary file using fwrite() and read using fread().

#include <stdio.h>
#include <string.h>

struct Employee {
    char name[50];
    int id;
    float salary;
};
void writeEmployeeToFile(struct Employee emp, const char *filename) {
    FILE *file = fopen(filename, "ab"); // Open file in append binary mode
    if (file != NULL) {
        fwrite(&emp, sizeof(struct Employee), 1, file);
        fclose(file);
    } else {
        printf("Error opening file for writing.\n");
    }
}
void readEmployeesFromFile(const char *filename) {
    FILE *file = fopen(filename, "rb"); // Open file in read binary mode
    if (file != NULL) {
        struct Employee emp;
        printf("Employee Records:\n");
        while (fread(&emp, sizeof(struct Employee), 1, file)) {
            printf("Name: %s, ID: %d, Salary: %.2f\n", emp.name, emp.id, emp.salary);
        }
        fclose(file);
    } else {
        printf("Error opening file for reading.\n");
    }
}
int main() {
    struct Employee emp1 = {"Alice Johnson", 101, 55000.50};
    struct Employee emp2 = {"Bob Smith", 102, 62000.75};    
    const char *filename = "employees.dat";
    writeEmployeeToFile(emp1, filename);
    writeEmployeeToFile(emp2, filename);
    readEmployeesFromFile(filename);
    return 0;
}