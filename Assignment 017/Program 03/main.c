/*
c)  Check whether a number is Armstrong or not.
*/

#include <math.h>
#include <stdio.h>
void isArmstrong(int n) {
    int num_digit = 0;
    int temp = n;
    while (temp > 0) {
        num_digit++;
        temp = temp / 10;
    }

    temp = n;
    int sum = 0;
    while (temp > 0) {
        int d = temp % 10;
        sum = sum + pow(d, num_digit);
        temp = temp / 10;
    }

    if (sum == n)
        printf("%d is Armstrong number\n", n);
    else
        printf("%d is not Armstrong number\n", n);
}
int main() {
    int n;

    printf("Enter a number : ");
    scanf("%d", &n);

    isArmstrong(n);

    return 0;
}

/*
-----------Output------------
Enter a number : 371
371 is Armstrong number
*/