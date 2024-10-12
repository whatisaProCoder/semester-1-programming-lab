/*
d)  Write a program in C where a function is defined which when called prints
    the multiplication table of a given integer passed as parameter.
    Call the function to print the muliplication table of 17.
*/

#include <stdio.h>
void print_table(int n) {
    for (int i = 1; i <= 10; i++) printf("%d x %d = %d\n", n, i, n * i);
}
int main() {
    int number = 17;
    print_table(number);
    return 0;
}

/*
-----------Output-------------------
17 x 1 = 17
17 x 2 = 34
17 x 3 = 51
17 x 4 = 68
17 x 5 = 85
17 x 6 = 102
17 x 7 = 119
17 x 8 = 136
17 x 9 = 153
17 x 10 = 170
*/