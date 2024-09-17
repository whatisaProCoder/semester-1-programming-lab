/*
b)  WAP in C program to define a function that finds the
    sum of all positive integers upto a given integer.
    Define the function recursively.
*/

#include <stdio.h>
int sum(int n) {
    if (n == 1) {
        return 1;
    } else {
        return n + sum(n - 1);
    }
}
int main() {
    int n;

    printf("Enter n : ");
    scanf("%d", &n);

    printf("Sum of positive integers upto %d = %d\n", n, sum(n));

    return 0;
}

/*
-----------Output------------
Enter n : 6
Sum of positive integers upto 6 = 21
*/