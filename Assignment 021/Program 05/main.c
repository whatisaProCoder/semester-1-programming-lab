/*
e)  Take an array of 10 numbers. Make a new
    array by reversing the original array.
*/

#include <stdio.h>
int main() {
    int sz = 10;
    int a[sz];
    printf("Enter 10 numbers...\n");
    for (int i = 0; i < sz; i++) {
        scanf("%d", &a[i]);
    }
    int b[sz];
    for (int i = 0; i < sz; i++) {
        b[i] = a[sz - i - 1];
    }
    printf("Reversed array...\n");
    for (int i = 0; i < sz; i++) {
        printf("%d ", b[i]);
    }
    return 0;
}

/*
-----------Output-------------------------
Enter 10 numbers...
1 2 3 4 5 6 7 8 9 10
Reversed array...
10 9 8 7 6 5 4 3 2 1
*/