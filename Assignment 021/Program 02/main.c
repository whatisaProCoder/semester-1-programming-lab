/*
b)  Print the values of two arrays (one consists of integers and other of floats) and their addresses.
*/

#include <stdio.h>
int main() {
    int n;
    printf("Enter n : ");
    scanf("%d", &n);
    int a[n];
    printf("Enter %d elements...\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    printf("Elements stored...\n");
    for (int i = 0; i < n; i++) {
        printf("%d\n", a[i]);
    }
}

/*
-----------Output------------
Enter n : 5
Enter 5 elements...
1 2 3 4 5
Elements stored...
1
2
3
4
5
*/