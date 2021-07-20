#include <stdio.h>

void main()
{
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