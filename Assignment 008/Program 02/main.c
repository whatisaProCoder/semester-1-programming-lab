//  b) WAP in C to find the squareroot of any number

#include <math.h>
#include <stdio.h>
int main() {
    double n, nsqrt;

    printf("Enter a number : ");
    scanf("%lf", &n);

    nsqrt = sqrt(n);

    printf("Squareroot of %.2lf  = %.2lf\n", n, nsqrt);

    return 0;
}

/*
-----------Output------------
Enter a number : 16
Squareroot of 16.00  = 4.00
*/