/*
a)  Define a function square(n) that takes an
    integer n and returns its square.
*/

#include <stdio.h>
int square(int n) {
    return n * n;
}
int main() {
    int n;

    printf("Enter n : ");
    scanf("%d", &n);

    printf("Square of n = %d\n", square(n));

    return 0;
}

/*
-----------Output------------
Enter n : 4
Square of n = 16
*/