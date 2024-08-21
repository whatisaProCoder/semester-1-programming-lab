//  b)  WAP in C to find out whether a number is
//      even or odd using conditional operator.

#include <stdio.h>
int main() {
    int n;

    printf("Enter a number : ");
    scanf("%d", &n);

    printf("The number %d is %s.\n", n, (n % 2 == 0) ? "even" : "odd");

    return 0;
}

/*
-----------Output------------
Enter a number : 7
The number 7 is odd.
*/