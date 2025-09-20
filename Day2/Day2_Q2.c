//Write a program to calculate the area and circumference of a circle given its radius.

#include <stdio.h>

int main() {
    float radius;
    float area, circumference;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    area = 3.14 * radius * radius;
    circumference = 2 * 3.14 * radius;

    printf("The area of the circle is %.2f\n", area);
    printf("The circumference of the circle is %.2f\n", circumference);

    return 0;
}