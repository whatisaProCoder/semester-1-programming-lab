/*
g)  Write a program in C where a function is defined
    which takes 3 integers as input and prints the
    average of the 3 integers.
*/

#include <stdio.h>
void print_avg(int a, int b, int c) {
    float avg = (float)(a + b + c) / 3;
    printf("Average = %.2f\n", avg);
}
int main() {
    int a, b, c;

    printf("Enter 3 integers: ");
    scanf("%d%d%d", &a, &b, &c);

    print_avg(a, b, c);

    return 0;
}

/*
----------Output--------------
Enter 3 integers: 12 19 15
Average = 15.33
*/