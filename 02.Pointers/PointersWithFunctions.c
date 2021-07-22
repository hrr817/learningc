#include <stdio.h>

/* Passing addresses to functions */
/**
 * Swap 
 * @param a address of int a 
 * @param b address of int b
 * @returns nothing but swaps values of a and b 
 */
void swap(int *a, int *b);

/* Passing Pointers to functions */
/**
 * Increments given value by x
 * @param p is pointer which holds the address of integer
 * @param x amount of addition to be made
 * @returns nothing but increments given pointer's content by 1
 */
void increment(int *p, int x);

int main()
{

   int jimmy = 10, alice = 16;
   printf("Jimmy is %d years old.\n", jimmy);
   printf("Alice is %d years old.\n", alice);

   printf("After swapping ages\n");
   // give address as param's value
   swap(&jimmy, &alice);

   printf("Jimmy is %d years old.\n", jimmy);
   printf("Alice is %d years old.\n", alice);

   int count = 0;
   printf("Count: %d\n", count);
   // let save count's addrress in pc (pointer) and increment value by 10 using increment function
   int *pc = &count;
   increment(pc, 10);
   printf("After increment, Count: %d\n", count);
}

void swap(int *a, int *b)
{
   int temp;
   temp = *a;
   *a = *b;
   *b = temp;
}

void increment(int *p, int x)
{
   (*p) += x;
}