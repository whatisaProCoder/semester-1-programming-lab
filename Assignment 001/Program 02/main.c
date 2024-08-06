#include <stdio.h>

// Write a program to take an integer input from the user and print ->
//      1. its square
//      2. previous integer
//      3. next integer

int main() {
    int n;
    printf("Enter an integer : ");
    scanf("%d", &n);

    int sqr = n * n;
    int pint = n - 1;
    int nint = n + 1;

    printf("Square           : %d", sqr);
    printf("Previous Integer : %d", pint);
    printf("Next Integer     : %d", nint);

    return 0;
}