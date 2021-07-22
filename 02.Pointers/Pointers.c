/**
 * Pointers (pointer variables) are special variables that are used to store addresses rather than values.
 */
#include <stdio.h>

int main()
{
   // Address
   int num = 10;

   // print num's value
   printf("Value of num is %d.\n", num);

   // print num's address (in hex value)
   printf("Address of num is %p.\n", &num);

   /* You will notice the address changes on each run */

   // How to store the address now?
   int *nums_address = &num;
   printf("Stored address is %p.\n", nums_address);

   // We can also get the address where num's address is stored
   printf("Stored address's address is %p.\n", &nums_address);

   // We can use addresses to get the value
   // Getting what is at the adress is quite simple, use asterisks (*)
   printf("Getting value from pointer: %d\n", *nums_address);
}
