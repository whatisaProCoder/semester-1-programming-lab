//  b)  WAP in C to calculate the simple interest. Take principal,
//      time and rate of interest as input from the user.

#include <stdio.h>
int main() {
    float P, T, R, SI;

    printf("Enter principal : ");
    scanf("%f", &P);

    printf("Enter time : ");
    scanf("%f", &T);

    printf("Enter rate of interest : ");
    scanf("%f", &R);

    SI = (P * R * T) / 100;

    printf("Simple Interest = %f\n", SI);

    return 0;
}

/*
-----------Output------------
Enter principal : 1000
Enter time : 2
Enter rate of interest : 5
Simple Interest = 100.000000
*/