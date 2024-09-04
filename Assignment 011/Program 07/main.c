/*
g) Find all 3 digit Armstrong numbers.
*/

#include <math.h>
#include <stdio.h>
int main() {
    printf("All 3 digit Armstrong numbers : \n");
    for (int n = 100; n <= 999; n++) {
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

        if (sum == n) {
            printf("%d ", n);
        }
    }
    printf("\n");

    return 0;
}

/*
-----------Output------------
All 3 digit Armstrong numbers :
153 370 371 407
*/