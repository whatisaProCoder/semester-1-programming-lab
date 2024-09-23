/*
e)  Print the following pattern with the number of rows taken from the user.
    ABCDEFG
     ABCDEF
      ABCDE
       ABCD
        ABC
         AB
          A
*/

#include <stdio.h>
int main() {
    int n;

    printf("Enter number of rows : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j < i; j++) {
            printf(" ");
        }
        char ch = 'A';
        for (int j = 1; j <= n - i + 1; j++) {
            printf("%c", ch++);
        }
        printf("\n");
    }

    return 0;
}

/*
-----------Output------------
Enter number of rows : 7
ABCDEFG
 ABCDEF
  ABCDE
   ABCD
    ABC
     AB
      A
*/