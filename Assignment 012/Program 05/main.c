/*
e)  WAP in C to declare and use a function that checks whether
    an integer passed as parameter us prime or not.
*/

#include <stdio.h>
void isPrime(int n) {
    int f = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0)
            f++;
    }
    if (f == 2)
        printf("%d is prime number\n", n);
    else
        printf("%d is not prime\n", n);
}
int main() {
    int n;

    printf("Enter n : ");
    scanf("%d", &n);

    isPrime(n);

    return 0;
}

/*
-----------Output------------
Enter n : 17
17 is prime number
*/