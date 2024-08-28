//  f)  Print alphabets from 'z' to 'a' (in reverse order).

#include <stdio.h>
int main() {
    for (char ch = 'z'; ch >= 'a'; ch--) {
        printf("%c ", ch);
    }
    printf("\n");

    return 0;
}

/*
-----------Output------------
z y x w v u t s r q p o n m l k j i h g f e d c b a
*/