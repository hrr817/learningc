#include <stdio.h>
#include <string.h> // includes function related to string, e.g.: strlen(), strcopy(), strcmp(), strcat()

int main()
{
   // Similarly like arrays, string names are converted to pointers
   // thus, we can use pointers to manipulate elements of the string

   char str[] = "Banana";

   for (int i = 0; i < strlen(str); i++)
   {
      printf("Address of %c: %p\n", *(str + i), str + i);
   }
}