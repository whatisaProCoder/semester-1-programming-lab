/*
b)  WAP in C to define and call a function that takes two positive integers
    N and R as input and returns the value of P(N,R), where P(N,R) is the
    number of permutations of N objects taken R at a time.
*/

#include <stdio.h>
int fact(int n) {
    if (n <= 1)
        return 1;
    else
        return n * fact(n - 1);
}
int P(int N, int R) {
    return fact(N) / fact(N - R);
}
int main() {
    int N, R;
    printf("Enter N : ");
    scanf("%d", &N);

    printf("Enter R : ");
    scanf("%d", &R);

    printf("P(%d,%d) = %d\n", N, R, P(N, R));

    return 0;
}

/*
-----------Output------------
Enter N : 10
Enter R : 4
P(10,4) = 5040
*/