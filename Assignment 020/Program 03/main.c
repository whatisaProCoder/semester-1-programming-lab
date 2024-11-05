/*
b)  WAP in C to count the frequency number of each element.
*/

#include <stdio.h>
int main() {
    int a[] = {1, 2, 3, 4, 5, 6, 5, 4, 2};
    int sz = sizeof(a) / sizeof(a[0]);
    int mark[sz];
    for (int i = 0; i < sz; i++) mark[i] = -1;

    printf("Frequency of each element...\n");
    for (int i = 0; i < sz; i++) {
        int freq = 0;
        if (mark[i] == 0) continue;
        for (int j = 0; j < sz; j++) {
            if (a[i] == a[j]) {
                freq++;
                mark[j] = 0;
            }
        }
        printf("%d => %d\n", a[i], freq);
    }
    return 0;
}

/*
-----------Output------------
Frequency of each element...
1 => 1
2 => 2
3 => 1
4 => 2
5 => 2
6 => 1
*/