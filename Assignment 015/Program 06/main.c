/*
f)  Print the following pattern with the number of rows taken from the user.
    1 2 3 4 5 6 7 8
    *             *
    *             *
    *             *
    *             *
    *             *
    *             *
    1 2 3 4 5 6 7 8
*/

#include <stdio.h>
int main() {
    int n;

    printf("Enter number of rows : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        if (i == 1 || i == n) {
            for (int j = 1; j <= n; j++) {
                printf("%d ", j);
            }
        } else {
            for (int j = 1; j <= n; j++) {
                if (j == 1 || j == n) {
                    printf("* ");
                } else {
                    printf("  ");
                }
            }
        }
        printf("\n");
    }

    return 0;
}

/*
-----------Output------------
Enter number of rows : 8
1 2 3 4 5 6 7 8 
*             * 
*             * 
*             * 
*             * 
*             * 
*             * 
1 2 3 4 5 6 7 8
*/