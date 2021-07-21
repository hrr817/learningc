#include <stdio.h>
#include <stdlib.h>

int main()
{
   int size = 0;

   printf("Enter number of elements (int): ");
   scanf("%d", &size);

   // allocating memory
   int *mem = (int *)malloc(size * sizeof(int));

   // in case allocation of memory fails print out error and exit the program
   if (mem == NULL)
   {
      printf("\nError: failed to allocate memory!");
      exit(0);
   }

   printf("Addresses of memory allocated:\n");
   for (int i = 0; i < size; i++)
   {
      printf("%p\n", mem + i);
   }

   printf("Reallocate memory: ");
   scanf("%d", &size);

   // in case re-allocation fails
   if (mem == NULL)
   {
      printf("\nError: failed to allocate memory!");
      exit(0);
   }

   // rellocate memory, realloc takes two params: first pointer and second size
   // it resizes a block of memory that was previously allocated
   // copies the contents of the old block to the new block of memory
   mem = (int *)realloc(mem, size * sizeof(int));

   printf("Addresses of memory after reallocation:\n");
   for (int i = 0; i < size; i++)
   {
      printf("%p\n", mem + i);
   }

   // free up memory after use
   free(mem);
}