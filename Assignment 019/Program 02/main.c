/*
b)  Design a structure named Car to store details like
    company name, model, price. WAP to input data for
    four cars. Find the lowest price car details.
*/

#include <stdio.h>
struct Car {
    char comp_name[50];
    char model[50];
    float price;
};
int main() {
    struct Car cars[4];
    printf("Enter details about 4 cars...\n");
    for (int i = 0; i < 4; i++) {
        printf("For car %d :\n", i + 1);
        printf("Company name? ");
        scanf("%s", cars[i].comp_name);
        printf("Model? ");
        scanf("%s", cars[i].model);
        printf("Price? ");
        scanf("%f", &cars[i].price);
    }

    int min_price = cars[0].price;
    int req_index = 0;
    for (int i = 0; i < 4; i++) {
        if (min_price > cars[i].price) {
            min_price = cars[i].price;
            req_index = i;
        }
    }

    printf("The least priced car in the collection is...\n");
    struct Car exp_car = cars[req_index];
    printf("Company name : %s\n", exp_car.comp_name);
    printf("Model        : %s\n", exp_car.model);
    printf("Price : %.2f\n", exp_car.price);
}

/*
-----------Output------------
Enter details about 4 cars...
For car 1 :
Company name? Suzuki
Model? Brezza
Price? 15000
For car 2 :
Company name? BMW
Model? S4
Price? 10000
For car 3 :
Company name? TATA
Model? Harrier
Price? 20000
For car 4 :
Company name? Hyundai
Model? Creta
Price? 25000
The least priced car in the collection is...
Company name : BMW
Model        : S4
Price : 10000.00
*/