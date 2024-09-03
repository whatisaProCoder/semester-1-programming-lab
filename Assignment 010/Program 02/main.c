/*
b)  WAP in C to take a positive integer as input from the user.
    Find the sum of squares of all the positive integers upto
    the given number.
    (Eg: if you give 4 as input, the program will compute and
    print the sum 1^2 + 2^2 + 3^2 + 4^2)
*/

#include <stdio.h>
int main() {
    int n, sum = 0;

    printf("Enter a positive integer : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        sum += i * i;
    }

    printf("Sum of squares = %d\n", sum);

    return 0;
}

/*
-----------Output------------
Enter a positive integer : 5
Sum of squares = 55
*/