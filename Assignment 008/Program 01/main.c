//  a) WAP in C to find the power of any number

#include <math.h>
#include <stdio.h>
int main() {
    double n, power, ans;

    printf("Enter a number : ");
    scanf("%lf", &n);
    printf("Enter power : ");
    scanf("%lf", &power);

    ans = pow(n, power);

    printf("Value of %.2lf ^ %.2lf = %.2lf\n", n, power, ans);

    return 0;
}

/*
-----------Output------------
Enter a number : 2
Enter power : 10
Value of 2.00 ^ 10.00 = 1024.00
*/