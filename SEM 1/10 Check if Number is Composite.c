/*
10. Check if Number is Composite

Problem Statement:
Given a number N, print 'yes' if it is composite else print 'no'.

Sample Input:
123

Sample Output:
yes

*/

#include <stdio.h>

int main() {
    int num, ans;
    scanf("%d", &num);
    
    if (num <= 1) {
        ans = 0;
    } else {
        for (int i = 2; i < num; i++) {
            if (num % i == 0) {
                ans = 1;
                break;
            }
        }
    }
    
    if (ans == 1) {
        printf("yes");
    }else {
        printf("no");
    }
    
    return 0;
}