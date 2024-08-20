//  d)  WAP in C to calculate the sum of first n positive integers
//      using for loop. Take the value of n as input from the user.

#include <stdio.h>
int main() {
    int n, sum = 0;

    printf("Enter n : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
        sum += i;

    printf("Sum = %d\n", sum);

    return 0;
}

/*
-----------Output------------
Enter n : 10
Sum = 55
*/