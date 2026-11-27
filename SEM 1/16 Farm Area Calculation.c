/*
16. Farm Area Calculation

Problem Statement:
Given length L and breadth B of a farm, print the area of the farm upto 5 decimal decimals.

Sample Input:
1.626 2.31

Sample Output:
3.75606

*/

#include <stdio.h>

int main() {
    float l, b;
    scanf("%f %f", &l, &b);
    
    float area = l*b;
    printf("%.5f", area);
    
    return 0;
}   