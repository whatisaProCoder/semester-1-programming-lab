//  e)  WAP in C to calculate the factorial of a given integer (>=0) using for loop.
//      factorial of n = n! = n*(n-1)*(n-2)*...2*1
//      For eg. 5! = 5*4*3*2*1 = 120

#include <stdio.h>
int main() {
    int n, f = 1;

    printf("Enter n : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
        f = f * i;

    printf("Factorial = %d\n", f);

    return 0;
}

/*
-----------Output------------
Enter n : 6
Factorial = 720
*/