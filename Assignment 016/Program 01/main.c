/*
a)  WAP in C to define and call a function that takes the temperature
    in Celcius as input and returns the temperature in Fahrenheit.
*/

#include <stdio.h>
float getF(float c) {
    return (c * 9.0 / 5.0) + 32.0;
}
int main() {
    float c;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &c);

    float f = getF(c);
    printf("Temperature in Fahrenheit: %.2f\n", f);

    return 0;
}

/*
-----------Output------------
Enter temperature in Celsius: 100
Temperature in Fahrenheit: 212.00
*/