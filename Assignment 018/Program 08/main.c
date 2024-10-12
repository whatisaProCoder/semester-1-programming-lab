/*
h)  Write a separate program in C where a function
    is defined which takes 3 integers as input and
    returns the average of the 3 integers. Can you
    explain the difference between the nature of
    the functions of this and previous program,
    even though both the functions are computing
    the same average?
    -> In previous program, the function is of void type, prints the average and
    returns nothing. While, in this program, the function is of float type and
    returns the float average.
*/

#include <stdio.h>
float get_avg(int a, int b, int c) {
    float avg = (float)(a + b + c) / 3;
    return avg;
}
int main() {
    int a, b, c;

    printf("Enter 3 integers: ");
    scanf("%d%d%d", &a, &b, &c);

    printf("Average = %.2f\n", get_avg(a, b, c));

    return 0;
}

/*
----------Output--------------
Enter 3 integers: 12 19 15
Average = 15.33
*/