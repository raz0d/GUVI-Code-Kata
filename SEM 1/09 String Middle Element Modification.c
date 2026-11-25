/*
9. String Middle Element Modification

Question:
Given a string S, print it after changing the middle element to * (if the length of the string is even, change the 2 middle elements to *).

Sample Input:
hello

Sample Output:
he*lo

*/

#include <stdio.h>

int main() {
    char str[100];
    scanf("%99s", &str);
    
    int len = 0;
    char *ptr = str;
    while (*ptr != '\0') {
        ptr++;
        len++;
    }
    
    if (len % 2 != 0) {
        str[len/2] = '*';
    }else  if (len%2 == 0) {
        str[len / 2] = '*';
        str[(len / 2) - 1] = '*';
    }
    
    printf("%s", str);
    
    return 0;
}   