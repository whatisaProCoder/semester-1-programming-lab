/*
d)  Check whether a number can be expressed as the sum of two prime numbers.
*/

#include <stdio.h>
int isPrime(int n) {
    for (int i = 2; i < n; i++) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}
void sum_of_two_primes(int n) {
    for (int i = 2; i < n; i++) {
        if (isPrime(i) && isPrime(n - i)) {
            printf("The prime numbers are %d & %d\n", i, n - i);
            printf("Here, %d + %d = %d (given number)\n", i, n - i, n);
            return;
        }
    }
    printf("%d cannot be expressed as sum of two primes.\n", n);
}
int main() {
    int n;

    printf("Enter a number : ");
    scanf("%d", &n);

    sum_of_two_primes(n);

    return 0;
}

/*
-----------Output------------
Enter a number : 20
The prime numbers are 3 & 17
Here, 3 + 17 = 20 (given number)
*/