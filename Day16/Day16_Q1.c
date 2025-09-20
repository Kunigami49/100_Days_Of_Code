//Write a program to take a number as input and print its equivalent binary representation.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int num, binary = 0, rem, i = 0;
    printf("Enter a decimal number: ");
    scanf("%d", &num);
    while (num != 0)
    {
        rem = num % 2;
        binary += rem * pow(10, i);
        num /= 2;
        i++;
    }
    printf("Binary representation: %d\n", binary);
    return 0;
}