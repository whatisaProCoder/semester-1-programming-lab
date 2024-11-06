/*
d)  Multiplication of odd index values.
*/

#include <stdio.h>
int main() {
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int sz = sizeof(a) / sizeof(a[0]);
    int mul = 1;
    printf("Odd indexed values...\n");
    for (int i = 0; i < sz; i += 2) {
        printf("%d\n", a[i]);
        mul *= a[i];
    }
    printf("Multiplication = %d\n", mul);
}

/*
-----------Output-------------------------
Odd indexed values...
1
3
5
7
Multiplication = 105
*/