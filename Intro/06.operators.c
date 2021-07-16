/* Assignment Operators */
// Operator	  Example	Same as
// =	        a = b  	a = b
// +=	        a += b	   a = a+b
// -=	        a -= b	   a = a-b
// *=	        a *= b	   a = a*b
// /=	        a /= b	   a = a/b
// %=	        a %= b	   a = a%b

/* Arithmatic Operators */
// Operator	   Meaning of Operator
// +	         addition or unary plus
// -	         subtraction or unary minus
// *	         multiplication
// /	         division
// %	         remainder after division (modulo division)

/* Relational Operators */
// if relation is true returns 1 else 0
// Operator	   Meaning of Operator	        Example
// ==	         Equal to	                    5 == 3 is evaluated to 0
// >	         Greater than	              5 > 3 is evaluated to 1
// <	         Less than	                 5 < 3 is evaluated to 0
// !=	         Not equal to	              5 != 3 is evaluated to 1
// >=	         Greater than or equal to	  5 >= 3 is evaluated to 1
// <=	         Less than or equal to	     5 <= 3 is evaluated to 0

/* Logical Operators */
// Operator	  Meaning	                                                Example
// &&	        Logical AND. True only if all operands are true          	If c = 5 and d = 2 then, expression ((c==5) && (d>5)) equals to 0.
// ||	        Logical OR. True only if either one operand is true       If c = 5 and d = 2 then, expression ((c==5) || (d>5)) equals to 1.
// !	        Logical NOT. True only if the operand is 0          	   If c = 5 then, expression !(c==5) equals to 0.

#include <stdio.h>

int main()
{
   /* Assignment Operators */
   int x = 5, y = 8;
   /* Arithmatic Operators */
   int z = x + y;
   printf("---------------- Arithmatic Operators -----------------\n");
   printf("x = %d and y = %d\n", x, y);
   printf("Sum of x and y is %d\n", z);

   /* Relational Operators */
   printf("---------------- Relational Operators -----------------\n");
   printf("%d\n", 5 > 3);  // returns 1, as 5 is greater than 3
   printf("%d\n", 1 > 3);  // returns 0, as 1 is less than 3
   printf("%d\n", 5 == 5); // returns 1, as 5 is equal to 5

   /* Logical Operators */
   printf("---------------- Logical Operators    -----------------\n");
   int age = 21;
   printf("%d\n", (age > 18) && (age < 60)); // returns 1, as both conditions are true
   printf("%d\n", (age < 18) || (age < 60)); // returns 1, as second conditions is true
   printf("%d\n", !(age > 18));              // returns 0, as condition is true so get opposite of true
}
