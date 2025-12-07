//Return a structure containing top student's details from a function.

#include <stdio.h>

struct Student {
    char name[50];
    int age;
    float marks;
};
struct Student getTopStudent(struct Student students[], int count) {
    struct Student topStudent = students[0];
    for(int i = 1; i < count; i++) {
        if(students[i].marks > topStudent.marks) {
            topStudent = students[i];
        }
    }
    return topStudent;
}