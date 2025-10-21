#include <stdio.h>

int main() {
   char ch;
   int position;
   scanf("%c", &ch);
   
   if(ch >= 'a' && ch <= 'z') {
       position = ch - 'a' + 1;
       printf("%d\n", position);
   }else if(ch >= 'A' && ch <= 'Z') {
       position = ch - 'A' + 1;
       printf("%d\n", position);
   }
   
   return 0;
}9
