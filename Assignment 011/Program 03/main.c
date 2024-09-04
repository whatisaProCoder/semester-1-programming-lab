/*
c)  Take any positive number from the user and print
    -> the sum of its digits
    -> the number of its digits
*/

#include <stdio.h>
int main() {
    int n, sum = 0, num = 0;

    printf("Enter +ve integer : ");
    scanf("%d", &n);

    while (n > 0) {
        int d = n % 10;
        sum += d;
        num++;
        n = n / 10;
    }

    printf("Sum of digits = %d\n", sum);
    printf("Number of digits = %d\n", num);

    return 0;
}

/*
-----------Output------------
Enter +ve integer : 12345
Sum of digits = 15
Number of digits = 5
*/