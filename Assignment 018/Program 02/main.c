/*
b)  Write a program in C where a function named
    circlearea is defined which takes the radius of
    a circle as input and returns the area of the
    circle. Call the function to compute and print
    the area of a circle with radius 7.33
*/

#include <stdio.h>
float circlearea(float r) { return 3.14 * r * r; }
int main() {
    float r = 7.33;
    float area = circlearea(r);

    printf("Radius of circle: %.2f\n", r);
    printf("Area of circle: %.2f\n", area);

    return 0;
}

/*
-----------Output------------
Radius of circle: 7.33
Area of circle: 168.71
*/