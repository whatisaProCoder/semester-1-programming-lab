/*
a)  Take a positive number (say n) from the user.
    Print from .5 to n in increments of 0.25
*/

#include <stdio.h>
int main() {
    int n;

    printf("Enter +ve integer : ");
    scanf("%d", &n);

    for (float i = 0.5; i <= n; i += 0.25) {
        printf("%.2f ", i);
    }
    printf("\n");

    return 0;
}

/*
-----------Output------------
Enter +ve integer : 2
0.50 0.75 1.00 1.25 1.50 1.75 2.00
*/