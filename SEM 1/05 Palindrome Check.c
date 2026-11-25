/*
5. Palindrome Check

Problem Statement:
Given a string S, print 'yes' if it is a palindrome or 'no' if it is not a palindrome.

Sample Input:
lappal

Sample Output:
yes

*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    scanf("%99s", &str);
    
    char rev_str[100];
    int len = strlen(str);
    
    for (int i = 0; i < len; i++) {
        rev_str[i] = str[len - 1 - i];
    }
    
    rev_str[len] = '\0';
    
    if (strcmp(rev_str, str) == 0) {
        printf("yes");
    }else {
        printf("no");
    }
    return 0;
}