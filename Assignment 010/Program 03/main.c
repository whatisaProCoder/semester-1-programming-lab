/*
c)  WAP in C to take two integers as input from the user and
    compute the GCD (greatest common divisor) of the two integers.
    Use FOR loop.
*/

#include <stdio.h>
int main() {
    int x, y, gcd;

    printf("Enter two integers : ");
    scanf("%d%d", &x, &y);

    for (int i = 1; i <= x; i++) {
        if (x % i == 0 && y % i == 0) {
            gcd = i;
        }
    }

    printf("GCD of %d and %d = %d\n", x, y, gcd);

    return 0;
}

/*
-----------Output------------
Enter two integers : 30 36
GCD of 30 and 36 = 6
*/