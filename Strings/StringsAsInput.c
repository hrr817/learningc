#include <stdio.h>

// using fgets
void getName();

// using fgets
void scanName();

int main()
{

   // using fgets
   getName();

   // using scanf
   scanName();
}

// using fgets
void getName()
{
   char new_name[20];

   // to read a line of text, use fgets functions
   printf("Enter name (using fgets): ");
   fgets(new_name, sizeof(new_name), stdin);

   // and use puts to display line of text
   printf("Your name is ");
   puts(new_name);
}

// using fgets
void scanName()
{
   char name[20];

   printf("Enter name (using scanf): ");
   scanf("%s", name); // scanf read characters until it encounters whitespace (space, tab, newline, etc)

   printf("Your name is %s\n", name);
}