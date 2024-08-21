/*
f)  WAP to input electricity unit charges and calculate total
    electricity bill according to the given condition:
    For first 50 units  Rs. 5/unit
    For next 100 units  Rs. 10/unit
    For next 100 units  Rs. 15/unit
    For units above 250 Rs. 20/unit
    An additional charge of 20% is added to the bill.
*/

#include <stdio.h>
int main() {
    float unit, bill, addcharge, totalbill;

    printf("Enter number of units : ");
    scanf("%f", &unit);

    if (unit <= 50)
        bill = unit * 5;
    else if (unit > 50 && unit <= 150)
        bill = (unit - 50) * 10 + 50 * 5;
    else if (unit > 150 && unit <= 250)
        bill = (unit - 150) * 15 + 100 * 10 + 50 * 5;
    else
        bill = (unit - 250) * 20 + 100 * 15 + 100 * 10 + 50 * 5;

    addcharge = 0.20 * bill;
    totalbill = bill + addcharge;

    printf("Total bill = %f\n", totalbill);

    return 0;
}

/*
-----------Output------------
Enter number of units : 100
Total bill = 900.000000
*/