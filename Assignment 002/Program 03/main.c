#include <stdio.h>

// Create a multiplication table.

int main() {
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);

    for (int i = 1; i <= 10; i++) {
        int prod = num * i;
        printf("%d x %d = %d\n", num, i, prod);
    }

    return 0;
}