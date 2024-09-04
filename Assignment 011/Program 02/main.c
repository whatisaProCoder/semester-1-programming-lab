/*
b)  Print alphabets from 'b' to 't' with a gap of 1 alphabet.
    Output: b d f h j l n p r t
*/

#include <stdio.h>
int main() {
    for (char ch = 'b'; ch <= 't'; ch += 2) {
        printf("%c ", ch);
    }
    printf("\n");

    return 0;
}

/*
-----------Output------------
b d f h j l n p r t
*/