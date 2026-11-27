/*
18. GCD of Two Numbers

Problem Statement:
Given 2 numbers N,M find the GCD of N and M.If it cannot be found for given number(s) then print -1

Sample Input:
10 5

Sample Output:
5

*/

#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    
    int gcd = -1;
    
    if (a == 0 && b == 0) {
        printf("%d", -1);
        return 0;
    }
    
    if (a < 0) a = -a;
    if (b < 0) b = -b;
    
    int greater_num;
    if (a > b) {
        greater_num = a;
    } else {
        greater_num = b;
    }
    
    
    for (int i = 1; i <= greater_num; i++) {
        if ((a % i == 0) && (b % i == 0)) {
            gcd = i;
        }
    }
    
    printf("%d", gcd);
    
    return 0;
}