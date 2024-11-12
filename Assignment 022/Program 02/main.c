/*
b)  WAP in C to sort a string array in ascending order.
*/

#include <stdio.h>
#include <string.h>
void sort(char *str, int len) {
    for (int i = 0; i < len - 1; i++) {
        for (int j = 0; j < len - i - 1; j++) {
            if (str[j] > str[j + 1]) {
                char temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
        }
    }
}
int main() {
    char str[50];
    printf("Enter a string...\n");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    // sorting
    int len = strlen(str);
    sort(str, len);

    printf("Sorted string : %s\n", str);

    return 0;
}

/*
-----------Output------------
Enter a string...
CAT
Sorted string : ACT
*/