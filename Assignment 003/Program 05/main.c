//	e)	Write a program to swap two numbers without using 3rd variable.

#include <stdio.h>
int main() {
    int x, y;

    printf("Enter x : ");
    scanf("%d", &x);
    printf("Enter y : ");
    scanf("%d", &y);

    x = x + y;
    y = x - y;
    x = x - y;

    printf("\nAfter swapping...\n");
    printf("Value of x = %d\n", x);
    printf("Value of y = %d\n", y);

    return 0;
}

// Output :
// Enter x : 12
// Enter y : 18

// After swapping...
// Value of x = 18
// Value of y = 12