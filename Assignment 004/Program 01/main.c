//  a)  Write a C program to take an integer as input from
//      the user and find if it is positive integer.

#include <stdio.h>
int main() {
    int n;

    printf("Enter an integer : ");
    scanf("%d", &n);

    if (n > 0)
        printf("The number is positive!\n");
    else if (n < 0)
        printf("The number is negative!\n");
    else
        printf("The number given is zero.\n");

    return 0;
}

// Output :
// Enter an integer : -12
// The number is negative!