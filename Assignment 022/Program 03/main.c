/*
c)  WAP in C to print individual characters in reverse order.
*/

#include <stdio.h>
#include <string.h>
void reverse(char *str, int len) {
    char rev[len];
    for (int i = 0; i < len; i++) {
        rev[i] = str[len - 1 - i];
    }
    rev[len] = '\0';
    strcpy(str, rev);
}
int main() {
    char str[50];
    printf("Enter a string...\n");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    // reverse
    int len = strlen(str);
    reverse(str, len);

    printf("Reversed string : %s\n", str);

    return 0;
}

/*
-----------Output------------
Enter a string...
DOG
Reversed string : GOD
*/