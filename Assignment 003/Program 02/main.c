// 	b)	Calculate area of a triangle by taking values of edges from user.

#include <stdio.h>
int main() {
    float b, h;

    printf("Enter base : ");
    scanf("%f", &b);
    printf("Enter height : ");
    scanf("%f", &h);

    float area = 0.5 * b * h;

    printf("Area of triangle = %f\n", area);

    return 0;
}