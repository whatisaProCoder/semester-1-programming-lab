/*
c)  Write a program in C where a function is defined
    which takes the value of USD($) as input and 
    returns the corresponding value of INR (Rs.)
*/

#include <stdio.h>
float convert(float usd) {
    float rate = 82.50;
    return usd * rate;
}
int main() {
    float usd, inr;
    printf("Enter the amount in USD: ");
    scanf("%f", &usd);
    inr = convert(usd);
    printf("%.2f USD is equivalent to %.2f INR\n", usd, inr);
    return 0;
}

/*
-----------Output-------------------
Enter the amount in USD: 5
5.00 USD is equivalent to 412.50 INR
*/