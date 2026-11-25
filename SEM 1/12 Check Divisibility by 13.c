/*
12. Check Divisibility by 13

Problem Statement:
Given a number N, print 'yes' if it is a multiple of 13 else print 'no'.

Sample Input:
26

Sample Output:
yes

*/

#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    
    if (num % 13 == 0) {
        printf("yes");
    } else {
        printf("no");
    }
    
    return 0;
}