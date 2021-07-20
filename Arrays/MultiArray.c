#include <stdio.h>

int main()
{
   /* Multidimensional Array      
   *  Representation            Access (row number, column number)
   *  [ ] [ ] [ ]               (0, 0) (0, 1) (0, 2)
   *  [ ] [ ] [ ]               (1, 0) (1, 1) (1, 2)
   *  [ ] [ ] [ ]               (2, 0) (2, 1) (2, 2)
   *  m x n = 3 x 3
    */
   float coords[2][2];
   // coords can hold upto 9 elements

   // initializing multidimensional array
   // [A] [B]
   // [C] [D]
   char school_class[2][2] = {{'A', 'B'}, {'C', 'D'}};

   // storing data of city and temperature, with 2d arrays
   int data[3][2];

   // nested loops for taking inputs
   for (int i = 0; i < 3; i++)
   {
      printf("Enter city and temperature: ");
      for (int j = 0; j < 2; j++)
      {
         scanf("%d", &data[i][j]);
      }
   }

   // nested loops for printing values
   printf("City No. and Temperature\n");
   for (int i = 0; i < 3; i++)
   {
      for (int j = 0; j < 2; j++)
      {
         printf("%6d ", data[i][j]);
      }
      printf("\n");
   }
}