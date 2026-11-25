/*
6. Vowel Check in String

Question:
Given a string S, print 'yes' if it has a vowel in it else print 'no'.

Sample Input:
codekata

Sample Output:
yes

*/

#include <stdio.h>
#include <string.h>

int main() {
    
    char str[100];
    scanf("%99s", &str);
    char vowels[] = "aeiouAEIOU";
    int len = strlen(str);
    int found = 0;
    
    for (int i = 0; i < len; i++) {
        for (int j = 0; j < 5; j++) {
            if (str[i] == vowels[j]) {
                found = 1;
                break;
            }
        }
    }
    
    if (found == 1){
        printf("yes");
    }else {
        printf("no");
    }
    return 0;
}