#include <stdio.h>
#include <string.h>

int main()
{
   char text[50] = "Lorem Ipsum ";
   printf("text: %s\n", text);

   // strlen() to get the length of string
   long int length = strlen(text);
   printf("Length: %ld\n", length);

   char backup_text[length];

   // strcpy(), copy a string contents to another string
   strcpy(backup_text, text); // copy contents of "text" to "backup_text"
   printf("------> After copying contents of text to backup_text:\n");
   printf("======= backup_text: %s\n", backup_text);

   // strcmp(), compare two strings
   int result = strcmp(text, backup_text);
   printf("------> Comapare text and backup_text:\n");
   printf("======= Note: zero means equal and non-zero means no equal\n");
   printf("======= result: %d\n", result);

   // strcat(), concatenation or join of two strings
   strcat(text, backup_text);
   printf("------> After concatenating backup_text to text: \n");
   printf("======= text: %s\n", text);
   printf("======= backup_text: %s\n", backup_text);
}