//  e)  WAP to check whether a character entered through the
//      keyboard is alphabet, digit or special character.

#include <ctype.h>
#include <stdio.h>
int main() {
    char ch;

    printf("Enter a character : ");
    scanf("%c", &ch);

    if (isalpha(ch))
        printf("%c is alphabet\n", ch);
    else if (isdigit(ch))
        printf("%c is digit\n", ch);
    else
        printf("%c is special character\n", ch);

    return 0;
}

/*
-----------Output------------
Enter a character : %
% is special character
*/