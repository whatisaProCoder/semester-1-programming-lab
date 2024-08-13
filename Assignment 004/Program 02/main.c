//  b)  Write a C program to take an integer as input
//      from the user and find if it is even or not.

#include <stdio.h>
int main() {
    int n;

    printf("Enter an integer : ");
    scanf("%d", &n);

    if (n % 2 == 0)
        printf("The number is even.\n");
    else
        printf("The number is odd.\n");

    return 0;
}

// Output :
// Enter an integer : 12
// The number is even.