/*
f)  Write a program in C where a function is defined
    which takes two positive integers as input and
    returns the LCM of the two given integers. If the
    previous function (of Question 7) is already
    defined, is there a shortcut you can use to define
    a function to compute the LCM that calls the
    previous function inside the definition?
*/

#include <stdio.h>
int get_gcd(int a, int b) {
    int gcd;
    for (int i = 1; i <= a; i++) {
        if (a % i == 0 && b % i == 0) gcd = i;
    }
    return gcd;
}
int get_lcm(int a, int b) {
    int gcd = get_gcd(a, b);
    int lcm = (a * b) / gcd;
    return lcm;
}
int main() {
    int a, b;

    printf("Enter two +ve integers: ");
    scanf("%d%d", &a, &b);

    printf("LCM of %d and %d = %d\n", a, b, get_lcm(a, b));

    return 0;
}

/*
----------Output--------------
Enter two +ve integers: 48 18
LCM of 48 and 18 = 144
*/