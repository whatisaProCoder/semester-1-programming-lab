/*
g)  Find the maximum and minimum of all array elements and their positions.
*/

#include <stdio.h>
int main() {
    int a[] = {8, 7, 6, 1, 2, 3, 9, 5, 6, 7, 8};
    int sz = sizeof(a) / sizeof(a[0]);
    int max = a[0];
    int maxi;
    int min = a[0];
    int mini;
    for (int i = 0; i < sz; i++) {
        if (max < a[i]) {
            max = a[i];
            maxi = i;
        }
        if (min > a[i]) {
            min = a[i];
            mini = i;
        }
    }
    printf("Max element : %d, pos : %d\n", max, maxi + 1);
    printf("Min element : %d, pos : %d\n", min, mini + 1);
    return 0;
}

/*
-----------Output-------------------------
Max element : 9, pos : 7
Min element : 1, pos : 4
*/