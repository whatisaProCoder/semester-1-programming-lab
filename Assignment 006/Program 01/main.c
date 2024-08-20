//  a)  Write a program to check whether the
//      person is elible for vote or not.

#include <stdio.h>
int main() {
    int age;

    printf("Enter age : ");
    scanf("%d", &age);

    if (age >= 18)
        printf("Eligible\n");
    else
        printf("Not eligible\n");

    return 0;
}

/*
Output :
*/