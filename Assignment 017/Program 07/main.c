/*
g)  Given three variables x, y, z write a function to circularly shift their values to the right n times.
    If initially x = 5, y = 8, z = 10, after circular shift:
    x = 10, y = 5, z = 8 when n=1.
    x = 8, y = 10, z = 5 when n=2.
    x = 5, y = 8, z = 10 when n=3.
    x = 10, y = 5, z = 8 when n=4.

    If the rotation is 100 times i.e. n=100, how many times will the loop rotate?
    Since there are 3 variables, effective number of right rotations is 100 % 3 = 1
*/

#include <stdio.h>
void shift(int *x, int *y, int *z, int n) {
    int temp;
    for (int i = 1; i <= n; i++) {
        temp = *z;
        *z = *y;
        *y = *x;
        *x = temp;
    }
}
int main() {
    int x, y, z, n;

    printf("Enter three numbers : ");
    scanf("%d%d%d", &x, &y, &z);

    printf("Enter number of right shifts : ");
    scanf("%d", &n);

    shift(&x, &y, &z, n);

    printf("After circular shifting %d times...\n", n);
    printf("x = %d, y = %d, z = %d\n", x, y, z);

    return 0;
}
/*
-----------Output------------
Enter three numbers : 5 8 10
Enter number of right shifts : 4
After circular shifting 4 times...
x = 10, y = 5, z = 8
*/