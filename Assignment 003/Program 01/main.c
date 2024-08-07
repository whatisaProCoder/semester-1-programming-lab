//	a)	Write a program to enter two integers and output them.

#include <stdio.h>
int main() {
    int a, b;

    printf("Enter two numbers : ");
    scanf("%d%d", &a, &b);

    printf("Two numbers are : %d and %d\n", a, b);

    return 0;
}

// Output :
// Enter two numbers : 10 15
// Two numbers are : 10 and 15