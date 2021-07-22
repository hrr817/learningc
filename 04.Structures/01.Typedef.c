/* Why structs in C?
* Suppose, you want to store information about a person: his/her name, citizenship number, and salary. You can create different variables name, citNo and salary to store this information.
* What if you need to store information of more than one person? Now, you need to create different variables for each information per person: name1, citNo1, salary1, name2, citNo2, salary2,etc.
* A better approach would be to have a collection of all related information under a single name Person structure and use it for every person.
*/
#include <stdio.h>

// typedef is used to give a type new name
typedef unsigned char uchar; // instead of writing "unsigned char" we can use uchar

// with typedef we can "point" as type
typedef struct Point
{
   int x;
   int y;
} point;

// nested structures
typedef struct Line
{
   point start;
   point end;
} line;

int main()
{
   // to declare unsigned char, now we can use "uchar"
   uchar alphabet = 'A';

   // now we can use "point" to delcare data type of Point
   point a;

   // line is data type consisting of two points
   line equator;
}