//  c)  WAP in C to find the sin, cos, tan value of given number

#include <math.h>
#include <stdio.h>
int main() {
    double n;

    printf("Enter a number : ");
    scanf("%lf", &n);

    printf("sin %.3lf = %.3lf\n", n, sin(n));
    printf("cos %.3lf = %.3lf\n", n, cos(n));
    printf("tan %.3lf = %.3lf\n", n, tan(n));

    return 0;
}

/*
-----------Output------------
Enter a number : 2.3
sin 2.300 = 0.746
cos 2.300 = -0.666
tan 2.300 = -1.119
*/