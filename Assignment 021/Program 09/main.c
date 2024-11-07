/*
i)  Print all unique elements in an array.
    If array arr = {2, 3, 2, 1, 4, 6, 4, 6}
    Then output will be 3, 1
*/

#include <stdio.h>
void elements(int a[], int sz) {
    for (int i = 0; i < sz; i++) {
        int j;
        for (j = 0; j < sz; j++) {
            if (i != j && a[i] == a[j]) {
                break;
            }
        }
        if (j == sz) {
            printf("%d ", a[i]);
        }
    }
    printf("\n");
}
int main() {
    int a[] = {2, 3, 2, 1, 4, 6, 4, 6};
    int sz = sizeof(a) / sizeof(a[0]);
    elements(a, sz);
    return 0;
}

/*
-----------Output--------------
3 1
*/