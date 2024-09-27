/*
a)  Print the following pattern.
            *
          *   *
        *       *
      *           *
    * * * * * * * * *
*/

#include <stdio.h>
int main() {
    int n = 5;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            printf("  ");
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            if (j == 1 || j == 2 * i - 1 || i == n)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }

    return 0;
}

/*
-----------Output------------
        * 
      *   * 
    *       * 
  *           * 
* * * * * * * * * 
*/