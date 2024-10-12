/*
e)  Write a program in C where a function is defined
    which takes two positive integers as input and
    returns the GCD of the two given integers.
*/

#include <stdio.h>
int get_gcd(int a, int b) {
    int gcd;
    for (int i = 1; i <= a; i++) {
        if (a % i == 0 && b % i == 0) gcd = i;
    }
    return gcd;
}
int main() {
    int a, b;

    printf("Enter two +ve integers: ");
    scanf("%d%d", &a, &b);

    printf("GCD of %d and %d = %d\n", a, b, get_gcd(a, b));

    return 0;
}

/* 
----------Output--------------
Enter two +ve integers: 48 18
GCD of 48 and 18 = 6
*/