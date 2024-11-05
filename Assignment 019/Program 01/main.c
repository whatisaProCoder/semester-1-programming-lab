/*
a)  Create a structure named Book to store book details
    like author, title, price. WAP to input details for
    three books. Find the most expensive book and display
    its info.
*/

#include <stdio.h>
#include <string.h>
struct Book {
    char author[30];
    char title[30];
    float price;
};
int main() {
    struct Book books[3];
    printf("Enter details about 3 books...\n");
    for (int i = 0; i < 3; i++) {
        printf("For book %d :\n", i + 1);
        printf("Author? ");
        scanf("%s", books[i].author);
        printf("Title? ");
        scanf("%s", books[i].title);
        printf("Price? ");
        scanf("%f", &books[i].price);
    }

    int max_price = 0;
    int req_index = -1;
    for (int i = 0; i < 3; i++) {
        if (books[i].price > max_price) {
            max_price = books[i].price;
            req_index = i;
        }
    }

    printf("The most expensive book in the collection is...\n");
    struct Book exp_book = books[req_index];
    printf("Author : %s\n", exp_book.author);
    printf("Title  : %s\n", exp_book.title);
    printf("Price : %.2f\n", exp_book.price);

    return 0;
}

/*
-----------Output------------
Enter details about 3 books...
For book 1 :
Author? Author1
Title? Title1
Price? 800
For book 2 :
Author? Author2
Title? Title2
Price? 900
For book 3 :
Author? Author3
Title? Title3
Price? 600
The most expensive book in the collection is...
Author : Author2
Title  : Title2
Price : 900.00
*/