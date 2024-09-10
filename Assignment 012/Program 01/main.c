/*
a)  WAP in C to define a function that prints
    the factorial of a given number.
*/

#include <stdio.h>
void factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact = fact * i;
    }
    printf("Factorial of %d = %d\n", n, fact);
}
int main() {
    int n;

    printf("Enter an number : ");
    scanf("%d", &n);

    factorial(n);

    return 0;
}

/*
-----------Output------------
Enter an integer : 6
Factorial of 6 = 720
*/