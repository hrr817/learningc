#include <stdio.h>

void main()
{
   // delcare an array of size 5, named "arr"
   int arr[5];
   printf("Uninitialized Array's\n");
   printf("value at index 0 is %d\n", arr[0]);
   printf("value at index 1 is %d\n", arr[1]);
   printf("value at index 2 is %d\n", arr[2]);

   /* uninitialized array's values will be may (or may not) be random */

   int naturals[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
   unsigned long int size = sizeof(naturals);
   printf("Size of array: %lu\n", size);
   // determine length of an array
   int len = sizeof(naturals) / sizeof(int);
   printf("Length of array: %d\n", len);
   int i = 0;
   while (1)
   {
      if (i == 10)
         break;
      printf("%d ", naturals[i]);
      i++;
   }
   printf("\n");
}