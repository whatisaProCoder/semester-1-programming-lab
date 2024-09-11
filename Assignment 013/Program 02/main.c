/*
b)  Print the given pattern.
*/

#include <stdio.h>
int main() {
    int n, count = 1;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    for (int i = n; i >= 0; i--) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}

/*
-----------Output------------
Enter number of rows: 5
1 2 3 4 5
1 2 3 4
1 2 3
1 2
1
*/