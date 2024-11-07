/*
b)  Print the values of two arrays (one consists of
    integers and other of floats) and their addresses.
*/

#include <stdio.h>
int main() {
    int a[] = {1, 2};
    int sza = sizeof(a) / sizeof(a[0]);
    float b[] = {1.2, 1.4};
    int szb = sizeof(b) / sizeof(b[0]);
    printf("Printing the values of int-array...\n");
    for (int i = 0; i < sza; i++) {
        printf("Value : %d, Address : %p\n", a[i], &a[i]);
    }
    printf("Printing the values of float-array...\n");
    for (int i = 0; i < szb; i++) {
        printf("Value : %.1f, Address : %p\n", b[i], &b[i]);
    }
    return 0;
}

/*
-----------Output-------------------------
Printing the values of int-array...
Value : 1, Address : 0x7fffffffdd78
Value : 2, Address : 0x7fffffffdd7c
Printing the values of float-array...
Value : 1.2, Address : 0x7fffffffdd70
Value : 1.4, Address : 0x7fffffffdd74
*/