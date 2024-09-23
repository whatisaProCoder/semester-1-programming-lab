/*
c)  Show an example where the main function calls a function f1 and f1 calls another function f2 from f1.
    Using different print statements show the flow of control
    (how control passes from main to f1 and then to f2 and then return all the way to main).
    (Main and f1 function contains 2 print statements. One before and one after calling another function.)
*/

#include <stdio.h>
void f2() {
    printf("Control in f2()...\n");
}
void f1() {
    printf("Control in f1()...\n");
    f2();
    printf("Control returns to f1()...\n");
}
int main() {
    printf("Control in main...\n");
    f1();
    printf("Control returns to main...\n");
}

/*
-----------Output------------
Control in main...
Control in f1()...
Control in f2()...
Control returns to f1()...
Control returns to main...
*/