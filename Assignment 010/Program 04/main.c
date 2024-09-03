/*
d)  WAP in C to take two integers as input from the user and
    compute the LCM (lowest common multiple) of the two integers.
    Use FOR loop.
*/

#include <stdio.h>
int main() {
    int x, y, gcd, lcm;

    printf("Enter two integers : ");
    scanf("%d%d", &x, &y);

    for (int i = 1; i <= x; i++) {
        if (x % i == 0 && y % i == 0) {
            gcd = i;
        }
    }

    lcm = (x * y) / gcd;

    printf("LCM of %d and %d = %d\n", x, y, lcm);

    return 0;
}

/*
-----------Output------------
Enter two integers : 30 36
LCM of 30 and 36 = 180
*/