//  b)  WAP in C to find out whether a number is
//      even or odd using conditional operator.

#include <stdio.h>
int main() {
    int n;

    printf("Enter a number : ");
    scanf("%d", &n);

    if (n % 2 == 0)
        printf("Even number\n");
    else
        printf("Odd number\n");

    return 0;
}

/*
-----------Output------------
Enter a number : 7
Odd number
*/