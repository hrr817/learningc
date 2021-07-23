/* How to clone a string without strclone() */
#include <stdio.h>
#include <stdlib.h>

/**
 * Get length of the given string
 * @param str reference of a string or pointer to char
 * @returns int length of a given string
 */
int len(const char *str);

/**
 * Creates a clone of a given string
 * @param *str pointer of string
 * @returns pointer (*clone)
 */
char *clone(const char *str);

int main()
{
   char *name = "Dennis Ritchie";

   // delcare a pointer, which going to hold address of cloned string
   char *name2;
   // assigning the address of cloned string
   name2 = clone(name);

   printf("String 1: %s\n", name);
   printf("String 2: %s\n", name2);
   printf("length of String 1: %d\n", len(name));
   printf("length of String 2: %d\n", len(name2));
}

int len(const char *str)
{
   int len = 0;
   while (str[len] != '\0')
      len++;
   return len;
}

char *clone(const char *str)
{
   char *clone;
   clone = (char *)malloc(len(str) * sizeof(char));
   int l = 0;
   while (*(str + l) != '\0')
   {
      clone[l] = *(str + l);
      l++;
   }

   return clone;
}