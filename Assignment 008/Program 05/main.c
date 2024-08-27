//  e)  Print the fibonacci sequence upto
//      the number entered by the user.

#include <stdio.h>
int main() {
    int a = 0, b = 1, c, n;

    printf("Enter a number : ");
    scanf("%d", &n);

    printf("Fibonacci sequence..\n");
    for (int i = 1; i <= n; i++) {
        c = a + b;
        printf("%d ", a);
        a = b;
        b = c;
    }
    printf("\n");

    return 0;
}

/*
-----------Output------------
Enter a number : 8
Fibonacci sequence..
0 1 1 2 3 5 8 13
*/