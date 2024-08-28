//  a)  WAP in C to calculate addition, subtraction, multiplication of two integers
//      switch case taking option from the user.
//      If the user gives 1, addition will be performed.
//      If the user gives 2, subtraction will be performed.
//      If the user gives 3, multiplication will be performed.

#include <stdio.h>
int main() {
    int x, y, choice;

    printf("Enter two numbers : ");
    scanf("%d%d", &x, &y);

    printf("Enter your choice : ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Sum = %d\n", x + y);
            break;
        case 2:
            printf("Difference = %d\n", x - y);
            break;
        case 3:
            printf("Product = %d\n", x * y);
            break;
        default:
            printf("Invalid choice\n");
    }

    return 0;
}

/*
-----------Output------------
Enter two numbers : 6 4
Enter your choice : 3
Product = 24
*/