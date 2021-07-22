#include <stdio.h>

int main()
{
   // When the compiler encounters a sequence of characters enclosed in the double quotation marks
   // it appends a null character \0 at the end by default.
   // ['H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '\0']
   char greeting[] = "Hello World";
   printf("Greeting: %s\n", greeting);

   // Ways to delcare a string
   char a[] = "abcd";
   char b[50] = "abcd";
   char c[] = {'a', 'b', 'c', 'd', '\0'};
   char d[5] = {'a', 'b', 'c', 'd', '\0'};

   // get length of string greeting
   long int len = sizeof(greeting) / sizeof(char);
   printf("Length of gretting: %ld\n", len);

   // there are total 11 characters, so length is 12 (including null character)
   // so arrays starts from 0, our string ends at 10th index
   // 11th is last index where is null character appended by compiler
   // value of last index is always "\0" a null character

   // Test to check if there is null character at last index
   // len - 1, because array starts from 0
   if (greeting[len - 1] == '\0')
   {
      printf("There is null character at last index.\n");
   }
   else
   {
      printf("There is no null character at last index.\n");
   }

   // Test to check if there is null character at second last index
   if (greeting[len - 2] == '\0')
   {
      printf("There is null character at second last index.\n");
   }
   else
   {
      printf("There is no null character at second last index.\n");
   }
}