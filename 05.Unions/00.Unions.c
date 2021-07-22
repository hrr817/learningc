#include <stdio.h>

/** Unions are similar to stuctures
 * unions takes the size of the member which has largest size
 * unions can only hold one member value at a time
 * all members share the same memory
 */
union A
{
   int age;  // size is 4
   double x; // size is 8
} a;         // unions will take size of its largest member + padding by compiler and will be shared among its members

struct B
{
   int age;  // size is 4
   double x; // size is 8
} b;         // sturct will add size of its all members + padding by compiler, that will be the final size of struct

int main()
{
   printf("Size of a (union): %ld\n", sizeof(a));
   printf("Size of b (struct): %ld\n", sizeof(b));
   long int asize = sizeof(a);
   long int bsize = sizeof(b);

   if (asize < bsize)
   {
      printf("Size of a (union) is less than b (struct).\n");
   }

   // working of union
   a.age = 21;
   printf("Value of a.age: %d\n", a.age);
   a.x = 30;
   printf("Value of a.x: %lf\n", a.x);
   printf("After assigning value to x; age no longer holds the 21\n");
   printf("because all members share the same memory\n");
   printf("Value of a.age: %d\n", a.age);
}