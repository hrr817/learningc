/* The C preprocessor is a macro preprocessor (allows you to define macros) that
 * transforms your program before it is compiled. These transformations can be
 * the inclusion of header file, macro expansions etc.
 * All preprocessing directives begin with a # symbol.
 */
// example
#define WHITE "#fff"

// including headers files
#include <stdio.h>

// custom header files
#include "./libs/mylib.h"

// Conditional Compilation
// #ifdef Directive
// the block of code inside ifdef and endif will only
// be compiled if WHITE macro is declared
#ifdef WHITE
#define BLACK "#000"
#endif

// #if, #elif and #else Directive
#if defined WHITE && defined BLACK
  #define hasWhiteBlack 1
#endif 

int main() {
  printf("Has black: %d\n", hasWhiteBlack);
  printf("Hex code of white color: %s\n", WHITE);
  printf("Value of Pi: %f\n", PI);
  float area, radius = 3.2;
  area = circleArea(2.2);
  printf("Area of circle of radius %.2f: %.2f\n", radius, area);

  // Predfined Macros
  printf("Date: %s\n", __DATE__);
  printf("Time:%s\n", __TIME__);
  printf("File Name: %s\n", __FILE__);
  printf("Current Line: %d\n", __LINE__);
  printf("Follows ANSI Standards: %d\n", __STDC__);
}
