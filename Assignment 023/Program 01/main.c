/*
a)  Calculate length of string without using strlen() function
*/

#include <stdio.h>
#include <string.h>
int main() {
    char str[50];
    printf("Enter a string...\n");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    int len = 0;
    while (str[len] != '\0') {
        len++;
    }

    printf("Length of string : %d\n", len);

    return 0;
}

/*
----------OUTPUT----------
Enter a string...
Pritam Debnath
Length of string : 14
*/