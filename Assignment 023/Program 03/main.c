/*
c) Check if a string is palindrome or not.
*/

#include <stdio.h>
#include <string.h>
void reverse(char *str, int len, char *rev) {
    for (int i = 0; i < len; i++) {
        rev[i] = str[len - i - 1];
    }
    rev[len] = '\0';
}

void isPalindrome(char *str, int len) {
    char rev[len + 1];
    reverse(str, len, rev);
    if (strcmp(str, rev) == 0) {
        printf("Palindrome String\n");
    } else {
        printf("Not Palindrome String\n");
    }
}

int main() {
    char str[50];
    printf("Enter a string...\n");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    int len = strlen(str);
    isPalindrome(str, len);

    return 0;
}