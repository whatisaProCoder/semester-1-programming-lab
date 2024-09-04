/*
d)  Print the following pattern with the
    number of rows taken from the user.
    1
    22
    333
    4444
*/

#include <stdio.h>
int main() {
    for (int i = 1; i <= 4; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d", i);
        }
        printf("\n");
    }

    return 0;
}

/*
-----------Output------------
1
22
333
4444
*/