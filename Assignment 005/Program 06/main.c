//  f)  Write a C program to find out greatest among three numbers.

#include <stdio.h>
int main() {
    int a, b, c, g;

    printf("Enter three numbers : ");
    scanf("%d%d%d", &a, &b, &c);

    if (a > b && a > c)
        g = a;
    else if (b > a && b > c)
        g = b;
    else if (c > a && c > b)
        g = c;

    printf("Greatest number = %d\n", g);

    return 0;
}

/*
Output :
Enter three numbers : 54 97 86
Greatest number = 97
*/