/*
b)  WAP in C to count the total number of duplicate elements in an array.
*/

#include <stdio.h>
int main() {
    int a[] = {1, 2, 3, 4, 5, 6, 5, 4, 2};
    int sz = sizeof(a) / sizeof(a[0]);
    int num = 0;
    for (int i = 0; i < sz - 1; i++) {
        for (int j = i + 1; j < sz; j++) {
            if (a[i] == a[j]) num++;
        }
    }
    printf("Number of duplicates : %d\n", num);
    return 0;
}

/*
-----------Output------------
Number of duplicates : 3
*/