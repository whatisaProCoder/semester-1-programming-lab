/*
h)  A positive integer is entered through the keyboard.
    Write a function to obtain the prime factors of this number.
    The prime factors of a number are the 'prime numbers' that are multiplied to get the original number.
    For example, prime factors of 24 are 2, 2, 2 and 3, whereas prime factors of 35 are 5 and 7.
*/

#include <stdio.h>
void prime_factors(int n) {
    printf("Prime factors of %d = ", n);
    for (int i = 2; i <= n; i++) {
        while (n % i == 0) {
            printf("%d ", i);
            n /= i;
        }
    }
    printf("\n");
}
int main() {
    int n;

    printf("Enter +ve integer : ");
    scanf("%d", &n);

    prime_factors(n);

    return 0;
}

/*
-----------Output------------
Enter +ve integer : 980
Prime factors of 980 = 2 2 5 7 7
*/