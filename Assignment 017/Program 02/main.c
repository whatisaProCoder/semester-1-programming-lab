/*
b)  Find the square and cube of any number. Use two different functions for square and cube.
*/

#include <stdio.h>
int square(int n) {
    return n * n;
}
int cube(int n) {
    return n * n * n;
}
int main() {
    int n;

    printf("Enter a number : ");
    scanf("%d", &n);

    printf("Square of %d = %d\n", n, square(n));
    printf("Cube of %d = %d\n", n, cube(n));

    return 0;
}

/*
-----------Output------------
Enter a number : 3
Square of 3 = 9
Cube of 3 = 27
*/