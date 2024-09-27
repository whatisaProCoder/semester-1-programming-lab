/*
e)  Find the sum of digits for three numbers taken from the user and find the maximum of their sums.
*/

#include <stdio.h>
int sumd(int n) {
    int s = 0;
    while (n > 0) {
        int d = n % 10;
        s = s + d;
        n = n / 10;
    }
    return s;
}
int max_sum(int a, int b, int c) {
    int sa = sumd(a);
    int sb = sumd(b);
    int sc = sumd(c);

    if (sa > sb && sa > sc)
        return sa;
    else if (sb > sa && sb > sc)
        return sb;
    else
        return sc;
}
int main() {
    int a, b, c;

    printf("Enter three numbers : ");
    scanf("%d%d%d", &a, &b, &c);

    printf("Maximum of sum of digits : %d\n", max_sum(a, b, c));

    return 0;
}

/*
-----------Output------------
Enter three numbers : 234 543 236
Maximum of sum of digits : 12
*/