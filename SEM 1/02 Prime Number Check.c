/*
2. Prime Number Check

Problem Statement:
Given a number N, check whether it is prime or not. Print 'yes' if it is prime else print 'no'.

Input Description:
The input consists of a single integer N.

Output Description:
The output is 'yes' if N is prime, otherwise 'no'.

Sample Input:
123

Sample Output:
no
*/

#include <stdio.h>

int main(){
    int num;
    char ans;
    scanf("%d", &num);
    if (num <= 0 ) {
        ans = 'n';
    }
    for (int i = 2; i < num; i++) {
        if (num % i == 0) {
            ans = 'n';
            break;
        }
    }
    if (ans == 'n') {
        printf("no");
    } else {
        printf("yes");
    }
    return 0;
}