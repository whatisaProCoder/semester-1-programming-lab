//	c)	Take length (l) and width (w) from user and then calculate area of rectangle
// 		which will have the length of one third of the input length (l/3).

#include <stdio.h>
int main() {
    float l, w;

    printf("Enter length : ");
    scanf("%f", &l);
    printf("Enter width : ");
    scanf("%f", &w);

    l = l / 3;

    float area = l * w;

    printf("Area of rectangle = %f\n", area);

    return 0;
}

// Output :
// Enter length : 10
// Enter width : 15
// Area of rectangle = 50.000000