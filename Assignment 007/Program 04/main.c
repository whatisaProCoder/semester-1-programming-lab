//  d)  WAP to check whether a character entered through the
//      keyboard is vowel or consonant or none of them.

#include <ctype.h>
#include <stdio.h>
int main() {
    char c, ch;

    printf("Enter a character : ");
    scanf("%c", &c);

    if (isalpha(c)) {
        ch = tolower(c);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            printf("%c is vowel\n", c);
        else
            printf("%c is consonant\n", c);
    } else
        printf("%c is not alphabet\n", c);

    return 0;
}

/*
-----------Output------------
Enter a character : B
B is consonant
*/