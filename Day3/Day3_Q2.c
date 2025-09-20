//Write a program to swap two numbers using a third variable.

#include <stdio.h>
int main() {
    int a, b, temp;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    temp = a;
    a = b;
    b = temp;
    printf("After swapping, first number is %d and second number is %d\n", a, b);
    return 0;
}