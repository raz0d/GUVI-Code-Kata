/*
4. Next Greater Power of 2
Question:
Given a number N, find its next immediate greater power of 2(i.e 2^1, 2^2, 2^3...).

Input Description:
The input consists of a number N where N <= 1000.

Sample Input:
4

Sample Output:
8
*/

#include <stdio.h>

int main() {
    
    int num;
    int power = 1;
    scanf("%d", &num);
    
    while (power <= num) {
        power *= 2;
    }
    
    printf("%d", power);
    return 0;
}
