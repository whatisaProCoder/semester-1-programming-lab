//  b)  Write a program to find quotient and remainder of two numbers.

#include <stdio.h>
int main() {
    int a, b, r;
    float q;

    printf("Enter two numbers : ");
    scanf("%d%d", &a, &b);

    q = (float)a / b;
    r = a % b;

    printf("Quotient  = %f\n", q);
    printf("Remainder = %d\n", r);

    return 0;
}

/*
Output :
Enter two numbers : 12 7
Quotient  = 1.714286
Remainder = 5
*/