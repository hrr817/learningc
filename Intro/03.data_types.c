/* Data types */
// determines the type and size of data associated with variable
// Type	                     Size (bytes)	                  Format Specifier
// int	                     at least 2, usually 4	         %d, %i
// char	                     1	                              %c
// float	                     4	                              %f
// double	                  8	                              %lf
// short int	               2 usually	                     %hd
// unsigned int	            at least 2, usually 4	         %u
// long int	                  at least 4, usually 8	         %ld, %li
// long long int	            at least 8	                     %lld, %lli
// unsigned long int	         at least 4	                     %lu
// unsigned long long int	   at least 8	                     %llu
// signed char	               1	                              %c
// unsigned char	            1	                              %c
// long double	               at least 10, usually 12 or 16 	%Lf

// unsigned can only store positive or zero values

// void
// void is an incomplete type. It means "nothing" or "no type". You can think of void as absent.
// For example, if a function is not returning anything, its return type should be void.
// Note that, you cannot create variables of void type.

// Other data types defined in C programming are:
// 01. bool Type
// 02. Enumerated type
// 03. Complex types

/* Derived Data Types */
// Data types that are derived from fundamental data types are derived types. For example: arrays, pointers, function types, structures, etc.

#include <stdio.h>
int main()
{
   short a;
   long b;
   long long c;
   long double d;

   printf("size of short = %d bytes\n", sizeof(a));
   printf("size of long = %d bytes\n", sizeof(b));
   printf("size of long long = %d bytes\n", sizeof(c));
   printf("size of long double= %d bytes\n", sizeof(d));
   return 0;
}