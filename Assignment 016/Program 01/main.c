/*
a)  WAP in C to define and call a function that takes the temperature
    in Celcius as input and returns the temperature in Fahrenheit.
*/

#include <stdio.h>
float celsiusToFahrenheit(float celsius) {
    return (celsius * 9.0 / 5.0) + 32.0;
}
int main() {
    float celsius;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    float fahrenheit = celsiusToFahrenheit(celsius);
    printf("Temperature in Fahrenheit: %.2f\n", fahrenheit);

    return 0;
}

/*
-----------Output------------
Enter temperature in Celsius: 100
Temperature in Fahrenheit: 212.00
*/