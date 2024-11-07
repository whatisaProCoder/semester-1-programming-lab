/*
k)  Print elements of array using recursion.
*/

#include <stdio.h>
void printarr(int a[], int i, int sz) {
    if (i == sz) return;
    printf("%d ", a[i]);
    printarr(a, i + 1, sz);
}
int main() {
    int a[] = {2, 3, 4, 6, 7, 8};
    int sz = sizeof(a) / sizeof(a[0]);
    printarr(a, 0, sz);
    return 0;
}

/*
-----------Output--------------
2 3 4 6 7 8
*/