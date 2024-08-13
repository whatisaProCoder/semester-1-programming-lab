//  d)  Write a C program to take an integer as input from the user
//      and print all the positive even numbers upto that integer.

#include <stdio.h>
int main() {
    int n;

    printf("Enter an integer : ");
    scanf("%d", &n);

    printf("Positive even numbers upto %d...\n", n);
    for (int i = 2; i <= n; i += 2) {
        printf("%d\n", i);
    }

    return 0;
}

/*
Output :
Enter an integer : 15
Positive even numbers upto 15...
2
4
6
8
10
12
14
*/