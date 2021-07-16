// headers files; libraries are included at the top of the file
#include <stdio.h>

int main() // code execution begins from here
{
   // displays the formatted text inside quoatations, using library function printf
   printf("Hello Word\n"); // to use this function we need stdio.h header file
   // output: Hello World

   int age = 21; // variable
   printf("Age is %d\n", age);
   // output: Age is 21

   const float PI = 3.14;
   printf("Value of PI is %.2f\n", PI);
   // .2 before f is formatter to number of decimals to print
   // output: Value of PI is 3.14

   char grade = 'A';
   printf("%c %d\n", grade, grade); // prints char (%c) and ascii value (%d)
   // output: A 65

   return 0; // exit status, (optional)
}