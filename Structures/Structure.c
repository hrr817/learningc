/* A structures is a collection of variables (can be of different types) under a single name */
#include <stdio.h>
#include <math.h>

// use struct keyword to define a structure
struct Point
{
   float x;
   float y;
} a, b;

int main()
{
   // point a
   a.x = 3.1;
   a.y = 0;
   printf("Print A: %.1f, %.1f\n", a.x, a.y);

   // point b
   b.x = 5.3;
   b.y = 1.7;
   printf("Print B: %.1f, %.1f\n", b.x, b.y);

   // distance between two points
   // sqr root of ((x2 - x1)sqr + (y2 - y1)sqr)
   // let m = (x2 - x1)sqr and
   // let n = (y2 - y1)sqr
   float _m = b.x - a.x;
   float _n = b.y - a.y;
   float m = _m * _m;
   float n = _n * _n;
   double dist = sqrt(m + n);
   printf("Distance: %lf\n", dist);
}
