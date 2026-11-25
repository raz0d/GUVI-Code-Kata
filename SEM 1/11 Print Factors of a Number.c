/*
11. Print Factors of a Number

Problem Statement:
Given a number N, print its factors.

Input Description:
Input Size : n<=1000

Sample Input:
6

Sample Output:
1 2 3 6

*/

#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    
    int found = 0;
    for (int i = 1; i < num+1; i++) {
        if (num%i == 0) {
            if (found == 1) {
                printf(" ", i);
            }
            printf("%d", i);
            found = 1;
        }
    }
    
    return 0;
}