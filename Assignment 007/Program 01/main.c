//  a)  Check whether the character entered through the
//      keyboard is a lowercase alphabet or upper case.

#include <stdio.h>
int main() {
    char ch;

    printf("Enter a character : ");
    scanf("%c", &ch);

    if (ch >= 'a' && ch <= 'z')
        printf("Lowercase Alphabet\n");
    else if (ch >= 'A' && ch <= 'Z')
        printf("Uppercase Alphabet\n");
    else
        printf("Neither lower or uppercase\n");

    return 0;
}

/*
-----------Output------------
Enter a character : b
Lowercase Alphabet
*/