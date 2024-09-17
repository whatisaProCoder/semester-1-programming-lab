/*
c)  WAP in C program to define a function that returns the
    n-th Fibonacci number. Define the function recursively.
*/

#include <stdio.h>
int fib(int n) {
    if (n <= 1)
        return n;
    else
        return fib(n - 1) + fib(n - 2);
}
int main() {
    int n;

    printf("Enter n : ");
    scanf("%d", &n);

    printf("%d-th Fibonacci Number = %d\n", n, fib(n));

    return 0;
}

/*
-----------Output------------
Enter n : 9
9-th Fibonacci Number = 34
*/