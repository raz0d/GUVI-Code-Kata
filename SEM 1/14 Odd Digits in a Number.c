/*
14. Odd Digits in a Number

Problem Statement:
Given a number N, print the odd digits in the number(space seperated) or print -1 if there is no odd digit in the given number.

Input Description:
The input consists of a single integer N, where N <= 100000.

Output Description:
The output should be the odd digits of N, space-separated, or -1 if no odd digits are present.

Sample Input:
2143

Sample Output:
1 3

*/

#include <stdio.h>

int main() {
    char num[10];
    scanf("%9s", &num);
    
    int i = 0, found = 0;
    
    while (num[i] != '\0') {
        int digit = num[i] - '0';
        if (digit % 2 != 0) {
            if (found == 1){
                printf(" ", digit);
            }
            printf("%d", digit);
            found = 1;
        }
        i++;
    }
    
    if (found == 0) {
        printf("%d", -1);
    }
    
    return 0;
}