/*
7. Number Range Check

Question:
Given 3 numbers N , L and R. Print 'yes' if N is between L and R else print 'no'.

Sample Input:
3
2 6

Sample Output:
yes
*/

#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if ((a >= b) && (a <= c)) {
        printf("yes");
    } else {
        printf("no");
    }

    return 0;
}