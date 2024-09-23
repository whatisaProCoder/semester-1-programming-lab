/*
b)  Show an example where the main function calls two functions f1 and f2.
    Using different print statements show the flow of control.
    (how control passes from main to f1 then return to main. Similarly for f2)
    (f1 and f2 each contain 1 print statement. Main contains 3 print statements -
    one before calling f1, one after calling f1 and another after calling f2.)
*/

#include <stdio.h>
void f1() {
    printf("Control in f1()...\n");
}
void f2() {
    printf("Control in f2()...\n");
}
int main() {
    printf("Control in main...\n");
    f1();
    printf("Control returns to main...\n");
    f2();
    printf("Control returns to main...\n");
}

/*
-----------Output------------
Control in main...
Control in f1()...
Control returns to main...
Control in f2()...
Control returns to main...
*/