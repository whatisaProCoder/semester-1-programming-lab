#include <stdio.h>

// Take 5 float-numbers as input and find the average of them.

int main() {
    float a, b, c, d, e;
    printf("Enter five numbers...\n");
    scanf("%f%f%f%f%f", &a, &b, &c, &d, &e);

    float average = (a + b + c + d + e) / 5;
    printf("Average = %f\n", average);

    return 0;
}