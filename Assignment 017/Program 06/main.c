/*
f)  Find from second up to the fifth power of any number having absolute
    value less than 10 without using library function pow.
*/

#include <math.h>
#include <stdio.h>
void exec(float n) {
    if (abs(n) >= 10) {
        printf("Over the limit...\n");
        return;
    }

    float ans = n;
    for (int i = 2; i <= 5; i++) {
        ans = ans * n;
        printf("%.2f to the power %d is %.2f\n", n, i, ans);
    }
}
int main() {
    float n;

    printf("Enter the number : ");
    scanf("%f", &n);

    exec(n);

    return 0;
}

/*
-----------Output------------
Enter the number : 2
2.00 to the power 2 is 4.00
2.00 to the power 3 is 8.00
2.00 to the power 4 is 16.00
2.00 to the power 5 is 32.00
*/