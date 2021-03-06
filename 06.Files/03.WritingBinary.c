/* How to create/open and write to a file*/
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct Line {
  float x;
  float y;
} line;

int main() {
  // open a file for writing in binary (overwrite), if doens't exist then create (wb)
  FILE *fptr = fopen("./sample.bin", "wb"); // params = (path of file, mode)

  if (fptr == NULL) {
    printf("Error, creating/opening file!");
    exit(1); // from stdlib
  }

  // take input from user
  line a;
  printf("Enter x and y of line: ");
  scanf("%f %f", &a.x, &a.y);

  // write taken input to file, fwrite(array where elements are copied from, size of each element in bytes, number of elements to write, output stream)
  for (int i = 0; i < 5; i++) {
    line copy;
    copy.x = a.x + (float)i;
    copy.y = a.y + (float)i;
    // unsigned long numberOfItems; for storing return value of fwrite (number of items successfully wrote) 
    fwrite(&copy, sizeof(copy), 1, fptr); // moves pointer by the number of bytes wrote therefore results in appending of data at the end after each write
  }

  // close file
  fclose(fptr);
}