#include <stdio.h>

void main()
{
   int number;
   printf("Enter a number:");
   // scanf is a funciton from stdio.h library
   scanf("%d", &number); // takes input from the user
   printf("You entered number %d.\n", number);

   float floating_number;
   printf("Enter a number in decimals:");
   scanf("%f", &floating_number);
   printf("Floating number is %f\n", floating_number);

   // taking multiples inputs
   int a, b, c;
   printf("Enter three digits: ");
   scanf("%d %d %d", &a, &b, &c);
   printf("%d %d %d\n", a, b, c);
}

// Data Type	               Format Specifier
// int	                     %d
// char	                     %c
// float	                     %f
// double	                  %lf
// short int	               %hd
// unsigned int	            %u
// long int     	            %li
// long long int	            %lli
// unsigned long int	         %lu
// unsigned long long int	   %llu
// signed char	               %c
// unsigned char	            %c
// long double	               %Lf