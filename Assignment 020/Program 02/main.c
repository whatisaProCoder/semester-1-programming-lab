/*
b)  WAP in C to count the total number of duplicate elements in an array.
*/

#include <stdio.h>
int main() {
    int a[] = {1, 2, 3, 4, 5, 6, 5, 4, 2, 5};
    int sz = sizeof(a) / sizeof(a[0]);
    int mark[sz];
    for (int i = 0; i < sz; i++) mark[i] = -1;

    int freq_dupl = 0;
    for (int i = 0; i < sz; i++) {
        int freq = 0;
        if (mark[i] == 0) continue;
        for (int j = 0; j < sz; j++) {
            if (a[i] == a[j]) {
                freq++;
                mark[j] = 0;
            }
        }
        if (freq > 1) freq_dupl++;
    }
    printf("Number of duplicates : %d\n", freq_dupl);

    return 0;
}

/*
-----------Output------------
Number of duplicates : 3
*/