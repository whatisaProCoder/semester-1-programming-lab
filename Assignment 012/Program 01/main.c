/*
a)  WAP in C to define a function that prints
    the factorial of a given number.
*/

#include <stdio.h>
int factorial(int n) {
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}
int main() {
    int n;

    printf("Enter an integer : ");
    scanf("%d", &n);

    printf("Factorial of %d = %d\n", n, factorial(n));

    return 0;
}

/*
-----------Output------------
Enter an integer : 6
Factorial of 6 = 720
*/