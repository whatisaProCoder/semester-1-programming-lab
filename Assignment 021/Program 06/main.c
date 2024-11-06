/*
f)  Declare an array of size 10. Take elements from the keyboard.
    Delete the element from a position (taken from user) and print the final
    array.
*/

#include <stdio.h>
int main() {
    int sz = 10;
    int a[sz];
    printf("Enter 10 elements...\n");
    for (int i = 0; i < sz; i++) {
        scanf("%d", &a[i]);
    }
    int pos;
    printf("Enter position to delete : ");
    scanf("%d", &pos);
    for (int i = pos - 1; i < sz; i++) {
        a[i] = a[i + 1];
    }
    sz--;
    printf("After deleting, the array...\n");
    for (int i = 0; i < sz; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}

/*
-----------Output-------------------------
Enter 10 elements...
11 12 31 4 50 62 75 82 9 100
Enter position to delete : 6
After deleting, the array...
11 12 31 4 50 75 82 9 100
*/