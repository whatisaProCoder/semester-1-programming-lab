/*
c)  Print even index (like 2, 4,...) values and print sum of these values.
*/

#include <stdio.h>
int main() {
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int sz = sizeof(a) / sizeof(a[0]);
    int sum = 0;
    printf("Even indexed values...\n");
    for (int i = 0; i < sz; i += 2) {
        printf("%d\n", a[i]);
        sum += a[i];
    }
    printf("Sum = %d\n", sum);
    return 0;
}

/*
-----------Output-------------------------
Even indexed values...
1
3
5
7
Sum = 16
*/