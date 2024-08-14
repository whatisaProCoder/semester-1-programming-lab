//  e)  Write a C program to find out greater among two numbers.

#include <stdio.h>
int main() {
    int a, b;

    printf("Enter two numbers : ");
    scanf("%d%d", &a, &b);

    if (a > b)
        printf("%d is greater.\n", a);
    else if (a < b)
        printf("%d is greater.\n", b);
    else
        printf("The numbers are equal.\n");
}

/*
Output :
Enter two numbers : 14 4
14 is greater.
*/