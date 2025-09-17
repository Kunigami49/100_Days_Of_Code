//Write a program to calculate the area and circumference of a circle given its radius.

#include<stdio.h>
int main(){
    float radius, area, circumference;
    const float pi= 3.14159;
    printf("Enter radius of circle:");
    scanf("%f", &radius);
    area= 3.14 * radius * radius;
    circumference= 2 * pi * radius;
    printf("Area of circle: %.2f\n", area);
    printf("Circumference of circle: %.2f\n", circumference);
    return 0;
}