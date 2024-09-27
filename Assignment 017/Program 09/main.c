/*
i)  Calculate GCD of two +ve integers without using recursion and then with.
*/

#include <stdio.h>
int get_gcd(int a, int b) {
    int gcd;
    for (int i = 1; i <= a; i++) {
        if (a % i == 0 && b % i == 0)
            gcd = i;
    }
    return gcd;
}
int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
int main() {
    int a, b;

    printf("Enter two +ve integer : ");
    scanf("%d%d", &a, &b);

    printf("GCD of %d & %d = %d\n", a, b, gcd(a, b));

    return 0;
}

/*
-----------Output------------
Enter two +ve integer : 98 56
GCD of 98 & 56 = 14
*/