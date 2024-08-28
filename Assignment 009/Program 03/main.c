//  c)  Take a positive integer from the user. If it is even, print from
//      1 to that number. If it is odd, print in descending order starting
//      from that number and go to 1.

#include <stdio.h>
int main() {
    int n;

    printf("Enter a integer : ");
    scanf("%d", &n);

    if (n % 2 == 0) {
        for (int i = 1; i <= n; i++) {
            printf("%d ", i);
        }
    } else {
        for (int i = n; i >= 1; i--) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}

/*
-----------Output------------
Enter a integer : 9
9 8 7 6 5 4 3 2 1
*/