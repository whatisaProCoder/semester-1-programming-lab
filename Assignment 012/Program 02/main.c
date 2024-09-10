/*
b)  WAP in C to find the greatest of 3 given
    numbers using function declaration.
*/

#include <stdio.h>
int greatest(int a, int b, int c) {
    if (a > b && a > c)
        return a;
    else if (b > a && b > c)
        return b;
    else
        return c;
}
int main() {
    int a, b, c;

    printf("Enter three numbers : ");
    scanf("%d%d%d", &a, &b, &c);

    printf("Greatest number = %d\n", greatest(a, b, c));

    return 0;
}

/*
-----------Output------------
Enter three numbers : 6 12 9
Greatest number = 12
*/