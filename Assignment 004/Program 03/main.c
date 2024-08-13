//  c)  Write a C program to take an integer as input from
//      the user and find if it is divisible by 7 or not.

#include <stdio.h>
int main() {
    int n;

    printf("Enter an integer : ");
    scanf("%d", &n);

    if (n % 7 == 0)
        printf("The number is divisible by 7.\n");
    else
        printf("The number is not divisible by 7.\n");

    return 0;
}

// Output :
// Enter an integer : 49
// The number is divisible by 7.