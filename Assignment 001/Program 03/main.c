#include <stdio.h>

// Write a program to take 2 integers as input from user and print ->
//      1. sum
//      2. difference
//      3. product

int main() {
    int a, b;
    printf("Enter two numbers : ");
    scanf("%d%d", &a, &b);

    int sum = a + b;
    int diff = a - b;
    int prod = a * b;

    printf("\n");
    printf("Sum        : %d\n", sum);
    printf("Difference : %d\n", diff);
    printf("Product    : %d\n", prod);

    return 0;
}