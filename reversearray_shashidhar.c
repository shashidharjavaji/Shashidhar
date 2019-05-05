#include <stdio.h>
int main()
{
   char stringOne[1000], reverseString[1000];
   int begin, end, count = 0;
 
   printf("Enter the String to be reversed\n");
   gets(stringOne);
   while (stringOne[count] != '\0')
      count++;
   end = count - 1;
   for (begin = 0; begin < count; begin++) {
      reverseString[begin] = stringOne[end];
      end--;
   }

   reverseString[begin] = '\0';
 
   printf("%s\n", r);

   return 0;
}