#include <stdio.h>

typedef struct Point
{
   float x;
   float y;
} point;

int main()
{
   // a is data type point and ptr is pointer of type point so it could hold the address of point data types
   point a, *ptr;
   ptr = &a;

   a.x = 3.14;
   a.y = 4.53;

   printf("Point a: %.2f, %.2f\n", a.x, a.y);
   printf("Size of a: %ld\n", sizeof(a));
   printf("Address of a: %p\n", ptr);

   // Access members using Pointer, with -> operator
   printf("Access members using pointer:\n");
   printf("Point a's x: %.2f\n", ptr->x);
   printf("Point a's y: %.2f\n", ptr->y);
}