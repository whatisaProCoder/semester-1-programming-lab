//  g)  Write a program to find the absolute value
//      of a number entered through the keyboard.

#include <stdio.h>
int main() {
    int n, abs;

    printf("Enter a number : ");
    scanf("%d", &n);

    if (n >= 0)
        abs = n;
    else
        abs = -n;

    printf("Absolute value = %d\n", abs); 

    return 0;
}

/*
Output :
Enter a number : -87
Absolute value = 87
*/
