#include <stdio.h>

/**
 * @param m = number of rows
 * @param n = number of columns
 * @param martix = reference to matrix
 * @param name = matrix name 
 * @returns nothing but fills the given matrix
 */
void scanMatrix(int m, int n, float matrix[m][n], char name)
{
   printf("Enter values for matrix %c (%d x %d): \n", name, m, n);
   for (int i = 0; i < m; i++)
   {
      for (int j = 0; j < n; j++)
      {
         printf("Enter %c%d%d: ", name, i + 1, j + 1);
         scanf("%f", &matrix[i][j]);
      }
   }
}

int main()
{
   float a[2][2], b[2][2], sum[2][2];

   // taking input for matrix a
   scanMatrix(2, 2, a, 'A');
   scanMatrix(2, 2, b, 'B');

   // calculate the sum and store in sum matrix
   for (int i = 0; i < 2; i++)
   {
      for (int j = 0; j < 2; j++)
      {
         sum[i][j] = a[i][j] + b[i][j];
      }
   }

   printf("Sum of two matrix: \n");
   for (int i = 0; i < 2; i++)
   {
      for (int j = 0; j < 2; j++)
      {
         printf("%.2f   ", sum[i][j]);

         if (j == 1)
            printf("\n");
      }
   }
}