/*
8. Round to Nearest Greater Integer

Question:
Given a floating point number with 1 decimal place round it off to nearest greater integer and print it.

Sample Input:
2.6

Sample Output:
3

*/

#include <stdio.h>

int main() {
    float num;
    scanf("%f", &num);
    
    int int_num = (int)num;
    
   if (num < 0) {
       printf("%d", int_num);
   }
   else if (num == int_num) {
       printf("%d", int_num);
   } else {
       printf("%d", int_num+1);
   }
    
    return 0;
}