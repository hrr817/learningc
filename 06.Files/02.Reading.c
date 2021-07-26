/* How to read a file */
#include <stdio.h>
#include <stdlib.h>

int main() {
  FILE *fptr = fopen("./sample.txt", "r");

  if(fptr == NULL) {
    printf("Error: file does not exist!");
    exit(1);
  }

  // varible for storing data
  char text[50];

  // read data and store it in variable
  // fscanf(fptr, "%s", text); // reads till white space character is met
  fgets(text, 50, fptr); // reads till newline or end of file or given number of characters

  // print the read data
  printf("Text: %s", text);

  // close file
  fclose(fptr);
}