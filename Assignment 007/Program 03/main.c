//  c)  WAP to check whether a character entered
//      through the keyboard is alphabet or not.

#include <stdio.h>
int main() {
    char ch;

    printf("Enter a number : ");
    scanf("%c", &ch);

    if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z')
        printf("Character is alphabet\n");
    else
        printf("Character is not alphabet\n");

    return 0;
}

/*
-----------Output------------
Enter a number : $
Character is not alphabet
*/