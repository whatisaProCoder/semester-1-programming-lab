/*
a)  Show an example where the main function calls a function f1.

    i)	Using different print statements show the flow of control (how control
        passes from main to f1  then return to main).
        (f1 contains 1 print statement. Main contains 2 print statements,
        one before and one after calling f1.)

    ii)	First time define f1 before and second time define f1 after
        writing the main function to check if there is any difference.
    Ans - NO DIFFERENCE
*/

#include <stdio.h>
void f1() {
    printf("Control in f1()...\n");
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
Control returns to main...
*/