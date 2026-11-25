/*
13. Perfect Square Product

Problem Statement:
Given 2 numbers N,M. Print 'yes' if their product is a perfect square else print 'no'.

Sample Input:
5 5

Sample Output:
yes

*/

#include <stdio.h>

int main() {
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    
    int product = a * b;
    int ans = 0;
    for (int i = 0; i*i <= product; i++) {
        if ((i*i) == product) {
            ans = 1;
            break;
        }
    }
    
    if (ans == 1) {
        printf("yes");
    }else {
        printf("no");
    }
    
    return 0;
}