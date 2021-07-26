#include <stddef.h>
#include <stdio.h>

typedef struct Line {
  float x;
  float y;
} line;

int main() {
  // open binary file
  FILE *fptr = fopen("./sample.bin", "rb");
  
  // Get size of our struct, needed for moving cursor
  printf("Size of line (struct): %ld\n", sizeof(line));

  // print current offset our of file, usually 0
  printf("Offset: %ld\n", ftell(fptr));

  // change offset to last element (line), (file pointer, offset (value to add/subtract), start from)
  // from end of file subtract sizeOf(line)
  // we will get last element
  fseek(fptr, -sizeof(line), SEEK_END);

  // print offset of file
  printf("Offset: %ld\n", ftell(fptr));

  line temp;
  for (int i = 0; i < 5; i++) {
    fread(&temp, sizeof(temp), 1, fptr);
    // cursor has moved sizeOf(temp) bytes forward
    printf("x: %f, y: %f\n", temp.x, temp.y);
    // so we need to move cursor 2 times sizeOf(temp) bytes backward (negative value)
    fseek(fptr, -2 * sizeof(line), SEEK_CUR);
  }

  fclose(fptr);
}