#include <stdio.h>

// Write a program to take the temperature in Celsius as
// input and print the temperature in Fahrenheit.

int main() {
    float C, F;
    printf("Enter temperature in Celsius : ");
    scanf("%f", &C);

    F = (9 * C) / 5 + 32;
    printf("Temperature in Fahrenheit    : %f\n", F);

    return 0;
}