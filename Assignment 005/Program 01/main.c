//  a)  Write a C program to print the ASCII value of a character.

#include <stdio.h>
int main() {
    char ch;

    printf("Enter a character : ");
    scanf("%c", &ch);

    printf("ASCII Value = %d\n", ch);

    return 0;
}

/*
Output :
Enter a character : A
ASCII Value = 65
*/