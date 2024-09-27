/*
j)  Calculate LCM of two +ve integers.
*/

#include <stdio.h>
int get_lcm(int a, int b) {
    int gcd, lcm;
    for (int i = 1; i <= a; i++) {
        if (a % i == 0 && b % i == 0)
            gcd = i;
    }

    lcm = (a * b) / gcd;
    return lcm;
}
int main() {
    int a, b;

    printf("Enter two +ve integer : ");
    scanf("%d%d", &a, &b);

    printf("LCM of %d & %d = %d\n", a, b, get_lcm(a, b));

    return 0;
}

/*
-----------Output------------
Enter two +ve integer : 98 56
LCM of 98 & 56 = 392
*/