//  e)  Take a positive integer (say x) from the user.
//      Check which numbers from 1 to x are divisible by 4.

#include <stdio.h>
int main() {
    int x;

    printf("Enter +ve integer : ");
    scanf("%d", &x);

    for (int i = 1; i <= x; i++) {
        if (i % 4 == 0) {
            printf("%d is divisible by 4\n", i);
        } else {
            printf("%d is not divisible by 4\n", i);
        }
    }

    return 0;
}

/*
-----------Output------------
Enter +ve integer : 12
1 is not divisible by 4
2 is not divisible by 4
3 is not divisible by 4
4 is divisible by 4
5 is not divisible by 4
6 is not divisible by 4
7 is not divisible by 4
8 is divisible by 4
9 is not divisible by 4
10 is not divisible by 4
11 is not divisible by 4
12 is divisible by 4
*/