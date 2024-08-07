#include <stdio.h>

// Write a C program to find addition of 2 numbers without using addition operator.

int main() {
    int a, b, sum;
    printf("Enter two numbers...\n");
    scanf("%d%d", &a, &b);

    sum = a - (-b);
    printf("Summation = %d\n", sum);

    return 0;
}