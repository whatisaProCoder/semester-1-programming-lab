/*
h)  If an array arr contains n elements, then write a program to check if
    arr[0] = arr[n-1], arr[1] = arr[n - 2] and so on.
*/

#include <stdio.h>
int checkSymmetry(int arr[], int n) {
    for (int i = 0; i < n / 2; i++) {
        if (arr[i] != arr[n - 1 - i]) {
            return 0;
        }
    }
    return 1;
}
int main() {
    int arr[] = {1, 2, 3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    if (checkSymmetry(arr, n)) {
        printf("The array is symmetric.\n");
    } else {
        printf("The array is not symmetric.\n");
    }

    return 0;
}

/*
-----------Output--------------
The array is symmetric.
*/