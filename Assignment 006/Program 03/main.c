//  c)  WAP in C to take two integers as input from the user.
//      ONLY if both integers are positive, proceed to find
//      the quotient and the remainder when the first integer
//      is divided by the second integer.

#include <stdio.h>
int main() {
    int nf, ns, rem;
    float quot;

    printf("Enter two integers : ");
    scanf("%d%d", &nf, &ns);

    if (nf > 0 && ns > 0) {
        quot = (float)nf / ns;
        rem = nf % ns;

        printf("Quotient = %f\n", quot);
        printf("Remainder = %d\n", rem);
    } else
        printf("Numbers are not all positive\n");

    return 0;
}

/*
-----------Output------------
Enter two integers : 10 4
Quotient = 2.500000
Remainder = 2
*/