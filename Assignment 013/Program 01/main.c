/*
a)  Print the given pattern.
*/

#include <stdio.h>
int main() {
    int n, count = 1;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", count++);
        }
        printf("\n");
    }

    return 0;
}

/*
-----------Output------------
Enter number of rows: 5
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
*/