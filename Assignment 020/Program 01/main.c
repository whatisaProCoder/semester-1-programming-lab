/*
a)  WAP in C to display all the values in an array in reversed order.
*/

#include <stdio.h>
int main() {
    int a[] = {1, 2, 3, 4, 5};
    int sz = 5;
    printf("In reversed order...\n");
    for (int i = sz - 1; i >= 0; i--) printf("%d\n", a[i]);
    return 0;
}

/*
-----------Output------------
In reversed order...
5
4
3
2
1
*/