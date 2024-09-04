/*
f) Find if a number is palindrome or not.
*/

#include <stdio.h>
int main() {
    int n;

    printf("Enter a number : ");
    scanf("%d", &n);

    int rev = 0, temp = n;
    while (temp > 0) {
        int d = temp % 10;
        rev = rev * 10 + d;
        temp = temp / 10;
    }

    if (n == rev) {
        printf("Palindrome number\n", n);
    } else {
        printf("Not palindrome number\n", n);
    }

    return 0;
}

/*
-----------Output------------
Enter a number : 767
Palindrome number
*/