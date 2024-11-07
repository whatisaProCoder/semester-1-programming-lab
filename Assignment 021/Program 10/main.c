/*
j)  Print only those elements in the array which occur exactly twice.
    If array arr = {2, 3, 2, 1, 6, 6, 4, 6, 4}
    Then output will be 2, 4
*/

#include <stdio.h>
int main() {
    int a[] = {2, 3, 2, 1, 6, 6, 4, 6, 4};
    int sz = sizeof(a) / sizeof(a[0]);
    int mark[sz];
    for (int i = 0; i < sz; i++) mark[i] = 0;
    printf("Elements which occur twice...\n");
    for (int i = 0; i < sz; i++) {
        int freq = 0;
        if (mark[i] == 1) continue;
        for (int j = 0; j < sz; j++) {
            if (a[i] == a[j]) {
                freq++;
                mark[j] = 1;
            }
        }
        if (freq == 2) printf("%d ", a[i]);
    }
    return 0;
}

/*
-----------Output--------------
Elements which occur twice...
2 4
*/