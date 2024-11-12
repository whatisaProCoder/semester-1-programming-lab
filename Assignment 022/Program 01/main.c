/*
a)  WAP in C to count the total number of alphabets,
    digits and special characters in string.
*/

#include <ctype.h>
#include <stdio.h>
#include <string.h>
int main() {
    int alpha = 0, digits = 0, spc = 0;
    char str[50];
    printf("Enter a string...\n");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if (!isspace(ch)) {
            if (isalpha(ch))
                alpha++;
            else if (isdigit(ch))
                digits++;
            else
                spc++;
        }
    }
    printf("No. of alphabets = %d\n", alpha);
    printf("Digits = %d\n", digits);
    printf("Special characters = %d\n", spc);
    return 0;
}

/*
-----------Output------------
Enter a string...
Hello World 123!
No. of alphabets = 10
Digits = 3
Special characters = 1
*/