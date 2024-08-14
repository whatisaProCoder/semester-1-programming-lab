//  c)  Find the output of the program.
//      Input a = 14, b = 4.

#include <stdio.h>
int main() {
    int a, b, quotient;
    float quotient1;

    printf("Enter a : ");
    scanf("%d", &a);
    printf("Enter b : ");
    scanf("%d", &b);

    quotient = a / b;
    quotient1 = a / b;

    printf("quotient = %d\n", quotient);
    printf("quotient1 = %f\n", quotient1);

    return 0;
}

/*
Output :
Enter a : 14
Enter b : 4
quotient = 3
quotient1 = 3.000000
*/