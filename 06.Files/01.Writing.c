/* How to create/open and write to a file*/
#include <stdio.h>
#include <stdlib.h>

int main() {
  // open a file for writing (overwrite), if doens't exist then create (w)
  FILE *fptr = fopen("./sample.txt", "w"); // params = (path of file, mode)

  if(fptr == NULL) {
    printf("Error, creating/opening file!");
    exit(1); // from stdlib
  }

  // take input from user
  char text[50];
  printf("Enter text: ");
  fgets(text, sizeof(text), stdin);

  // write taken input to file
  fprintf(fptr, "%s", text);

  // close file
  fclose(fptr);
}