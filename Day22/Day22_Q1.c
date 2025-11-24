//Write a program to check if a number is a strong number.

#include <stdio.h>
#include <math.h>

int factorial(int num) {
    if (num == 0 || num == 1) {
        return 1;
    }
    int fact = 1;
    for (int i = 2; i <= num; i++) {
        fact *= i;
    }
    return fact;
}