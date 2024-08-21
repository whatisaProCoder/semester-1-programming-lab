//  d)  WAP to check whether a character entered through the
//      keyboard is vowel or consonant or none of them.

#include <ctype.h>
#include <stdio.h>
int main() {
    char ch;

    printf("Enter a character : ");
    scanf("%c", &ch);

    if (isalpha(ch)) {
        ch = tolower(ch);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            printf("Character is vowel\n");
        else
            printf("Character is consonant\n");
    } else
        printf("Character is not alphabet\n");

    return 0;
}

/*
-----------Output------------
Enter a character : B
Character is consonant
*/