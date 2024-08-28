//  d)  Take a positive float number (say n) from the user.
//      Print from -n to n in increment of 0.5

#include <stdio.h>
int main() {
    float n;

    printf("Enter +ve float number : ");
    scanf("%f", &n);

    for (float i = -n; i <= n; i += 0.5) {
        printf("%.2f ", i);
    }
    printf("\n");

    return 0;
}

/*
-----------Output------------
Enter +ve float number : 2.3
-2.30 -1.80 -1.30 -0.80 -0.30 0.20 0.70 1.20 1.70 2.20
*/