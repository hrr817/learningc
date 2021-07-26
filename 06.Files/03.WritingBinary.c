/* How to create/open and write to a file*/
#include <stdio.h>
#include <stdlib.h>

int main() {
  // open a file for writing in binary (overwrite), if doens't exist then create (wb)
  FILE *fptr = fopen("./sample.bin", "wb"); // params = (path of file, mode)

  if (fptr == NULL) {
    printf("Error, creating/opening file!");
    exit(1); // from stdlib
  }

  // take input from user
  char text[50];
  printf("Enter text (will be saved in binary): ");
  fgets(text, sizeof(text), stdin);

  // write taken input to file, fwrite(array where elements are copied from, size of each element in bytes, number of elements to write, output stream)
  fwrite(text, sizeof(text), 50, fptr);

  // close file
  fclose(fptr);
}