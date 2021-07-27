/* An enumeration type (also called enum) is a data type that consists of integral constants.  */
#include <stdio.h>

// defining enums types
enum bool {false, true}; // is equal to {false = 0, true = 1}

// define and declare at the same time
enum design_flags {BOLD = 1, ITALIC = 2, UNDERLINE = 4} text_style; // enums can hold negative and positive integers

int main() {
  // declaring enums and initializing (one of the value when defined)
  // enums can old one value at a time
  enum bool is_even = false; 

  // take a number
  int num;
  printf("Enter a number: ");
  scanf("%d", &num);

  // if given num is even number then set is_even to true 
  if(num % 2 == 0) {
    is_even = true;
  }

  // if is_even is true then print given number is even number
  if(is_even) {
    printf("%d is even number.\n", num);
  } else {
    printf("%d is odd number.\n", num);
  }

  // default value is first element's index
  printf("Initial value: %d\n", text_style);

  // we can couple up enums, using butwise OR operator
  text_style = BOLD | UNDERLINE;

  //    00000001 (value of BOLD in binary)
  //  | 00000100 (value of UNDERLINE in binary)
  //  ___________
  //    00000101 (value after bitwise OR operation

  printf("Combined value: %d\n", text_style); // will always be the same, when its 5 we know bold and underline styles are said

  if(text_style == 5) {
    printf("Add bold and italic styles to text.\n");
  }
}