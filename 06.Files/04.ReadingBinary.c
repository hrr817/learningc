/* How to read a binary file */
#include <stdio.h>
#include <stdlib.h>

int main() {
  FILE *fptr = fopen("./sample.bin", "rb");

  if (fptr == NULL) {
    printf("Error: file does not exist!");
    exit(1);
  }

  // varible for storing data
  char text[50];

  // read data and store it in variable
  fread(text, sizeof(char), 50, fptr); // (array where elements will be stored, size of each element to be read in bytes, number of elements to be read, input stream to read from)

  // print the read data
  printf("Text: %s", text);

  // close file
  fclose(fptr);
}