/* How to read a binary file */
#include <stdio.h>
#include <stdlib.h>

typedef struct Line {
  float x;
  float y;
} line;

int main() {
  FILE *fptr = fopen("./sample.bin", "rb");

  if (fptr == NULL) {
    printf("Error: file does not exist!");
    exit(1);
  }

  // varible for storing data
  line temp;

  for (int i = 0; i < 5; i++) {
    // read data and store it in variable
    // params(array where elements will be stored, size of each element to be read in bytes, number of elements to be read, input, stream to read from)
    fread(&temp, sizeof(temp), 1, fptr); // moves pointer by number of bytes read
    printf("Line %d: %.2f %.2f\n", i + 1, temp.x, temp.y);
  }
  // close file
  fclose(fptr);
}