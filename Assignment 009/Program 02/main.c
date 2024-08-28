//  b)  Print numbers from 10 to 1 in descending order.

#include <stdio.h>
int main() {
    for (int i = 10; i >= 1; i--) {
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}

/*
-----------Output------------
10 9 8 7 6 5 4 3 2 1
*/