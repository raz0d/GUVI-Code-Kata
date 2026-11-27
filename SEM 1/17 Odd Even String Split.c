/*
17. Odd Even String Split

Problem Statement:
Given a string S, print 2 strings such that first string containing all characters in odd position(s) and other containing all characters in even position(s).

Sample Input:
XCODE

Sample Output:
XOE CD

*/

#include <stdio.h>

int main() {
    char str[100];
    scanf("%99s", &str);
    
    char odd_str[100];
    char even_str[100];
    
    int i = 0, even = 0, odd = 0;
    
    while (str[i] != '\0') {
        if (i % 2 == 0) {
            even_str[even] = str[i];
            even++;
        } else {
            odd_str[odd] = str[i];
            odd++;
        }
        i++;
    }
    
    even_str[even] = '\0';
    odd_str[odd] = '\0';
    
    printf("%s %s", even_str, odd_str);
    
    return 0;
}