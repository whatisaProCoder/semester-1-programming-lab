//  d)  WAP in C to print if a number is prime or not

#include <math.h>
#include <stdio.h>
int main() {
    int n, f = 0;

    printf("Enter a number : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        if (n % i == 0)
            f++;
    }

    if (f == 2)
        printf("%d is prime number\n", n);
    else
        printf("%d is not prime number\n", n);

    return 0;
}

/*
-----------Output------------
Enter a number : 13
13 is prime number
*/