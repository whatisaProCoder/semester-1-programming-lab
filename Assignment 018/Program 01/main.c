/*
a)  Write a C program to define a function that
    converts the given temperature in Celcius to
    Fahrenheit. Call the function and convert the
    temperature 100 degree Celcius to Fahrenheit.
*/

#include <stdio.h>
float getF(float C) { return (C * 9.0 / 5.0) + 32; }
int main() {
    float C = 100;
    float F = getF(C);

    printf("Temperature in Celcius: %.2f\n", C);
    printf("Temperature in Fahrenheit: %.2f\n", F);

    return 0;
}

/*
-----------Output------------
Temperature in Celcius: 100.00
Temperature in Fahrenheit: 212.00
*/