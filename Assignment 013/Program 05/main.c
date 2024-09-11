/*
e)  Print the given pattern.
*/

#include <ctype.h>
#include <stdio.h>
int main() {
    char ch = 'a';
    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%c ", (i % 2 == 0) ? toupper(ch) : ch);
        }
        printf("\n");
        ch++;
    }

    return 0;
}

/*
-----------Output------------
a
B B
c c c
D D D D
e e e e e
F F F F F F
g g g g g g g
H H H H H H H H
i i i i i i i i i
J J J J J J J J J J
*/