//	d)	Write a program to swap two numbers using 3rd variable.

#include <stdio.h>
int main() {
    int x, y;

    printf("Enter x : ");
    scanf("%d", &x);
    printf("Enter y : ");
    scanf("%d", &y);

    int temp = x;
    x = y;
    y = temp;

    printf("\nAfter swapping...\n");
    printf("Value of x = %d\n", x);
    printf("Value of y = %d\n", y);

    return 0;
}

// Output :
// Enter x : 10
// Enter y : 15

// After swapping...
// Value of x = 15
// Value of y = 10