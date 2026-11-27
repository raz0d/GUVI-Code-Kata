/*
19. Cuboid Surface Area and Volume

Problem Statement:
Write a program to calculate the total surface area and volume of cuboid.

Input Description:
Input contains three space separated positive integers L, B, H denoting the length, width and height of cuboid respectively.

Output Description:
The output should be the total surface area and volume of the cuboid, separated by a space.

Sample Input:
1 2 3

Sample Output:
22 6

*/

#include <stdio.h>

int main() {
    int l, b, h;
    scanf("%d %d %d", &l, &b, &h);
    
    int surface_area = 2*((l*b) + (b*h) + (l*h));
    int volume = l*b*h;
    
    printf("%d %d", surface_area, volume);
    
    return 0;
}