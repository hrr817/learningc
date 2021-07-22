#include <stdio.h>
#include <stdlib.h> // malloc, calloc, realloc and free functions are in this library make sure to include these libraries

int main()
{
   // We will dynamically allocate memory using calloc for array,
   // calloc initializes all bits to zero
   int size = 0;

   printf("Enter the number of elements: ");
   scanf("%d", &size);

   // allocate contiguous memory for array
   // note: malloc is faster than calloc, use malloc unless we need to zero-initialization
   int *ptr = (int *)calloc(size, sizeof(int));

   // in case allocation of memory fails print out error and exit the program
   if (ptr == NULL)
   {
      printf("\nError: failed to allocate memory!");
      exit(0);
   }

   printf("\n");
   for (int i = 0; i < size; ++i)
   {
      printf("Enter element %d: ", i + 1);
      scanf("%d", ptr + i);
   }

   // Display array
   printf("Array: [");
   for (int i = 0; i < size; i++)
   {
      if (size == 1)
         printf("%d", *(ptr + i));
      else if (i == (size - 1))
         printf("%d", *(ptr + i));
      else
         printf("%d, ", *(ptr + i));
   }
   printf("]\n");

   // free the memory after use
   free(ptr);
}