/*
d)  WAP in C to declare and use a function that reverses
    an integer when it is passed as a parameter.
*/

#include <stdio.h>
int reverse(int n) {
    int rev = 0;
    while (n > 0) {
        int d = n % 10;
        rev = rev * 10 + d;
        n = n / 10;
    }
    return rev;
}
int main() {
    int n;

    printf("Enter n : ");
    scanf("%d", &n);

    printf("Reversed number = %d\n", reverse(n));

    return 0;
}

/*
-----------Output------------
Enter n : 1234
Reversed number = 4321
*/