/*
b)  Copy a string in another string without using strcpy()
*/

#include <stdio.h>
#include <string.h>
int main() {
    char str[50];
    int sz = sizeof(str) / sizeof(str[0]);
    printf("Enter a string...\n");
    fgets(str, sz, stdin);
    str[strcspn(str, "\n")] = '\0';

    char str2[sz];
    int i;
    for (i = 0; str[i] != '\0'; i++) {
        str2[i] = str[i];
    }
    str2[i] = '\0';

    printf("The copy of the array...\n");
    printf("%s\n", str2);

    return 0;
}