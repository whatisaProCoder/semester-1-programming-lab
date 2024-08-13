//  e)  Write a C program to take an integer as input from the user
//      and check if it is divisible by both 2 and 3.

#include <stdio.h>
int main() {
    int n;

    printf("Enter an integer : ");
    scanf("%d", &n);

    if (n % 2 == 0 && n % 3 == 0)
        printf("The number is divisible by both 2 and 3.\n");
    else if (n % 2 == 0)
        printf("The number is divisible by only 2.\n");
    else if (n % 3 == 0)
        printf("The number is divisible by only 3.\n");
    else
        printf("The number is not divisible by both 2 and 3\n");

    return 0;
}

/*
Output :
Enter an integer : 12
The number is divisible by both 2 and 3.
*/