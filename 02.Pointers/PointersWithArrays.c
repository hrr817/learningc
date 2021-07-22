#include <stdio.h>

int main()
{
   // an array which can hold upto 4 elements
   int arr[4];

   // lets print out addresses of each element in array
   for (int i = 0; i < 4; i++)
   {
      printf("Address of index %d: %p\n", i, &arr[i]);
   }

   /* Addresses will have difference of usually 4 bytes or 2 bytes; As array stores elements in contiguous memory locations.  */

   // Arrays with pointers
   int nums[3], sum = 0;

   // array + int (index number) = will give address
   // e.g.: nums + 0 = address of nums[0] (&nums[0])
   // to get value, use *; *(nums + 0)

   // lets fill nums with user input, to store sum of the input values
   for (int i = 0; i < 3; i++)
   {
      printf("Enter value at index %d: ", i);
      scanf("%d", nums + i); // nums + i is equivalent to &nums[i]
      sum += *(nums + i);    // *(nums + i) is equivalent to sum += x[i]
   }

   printf("Sum is %d.\n", sum); // display sum

   int *second_element_address = &nums[1];
   // from second element's address we can get first or third element
   printf("First element is %d\n", *(second_element_address - 1));
   printf("Third element is %d\n", *(second_element_address + 1));

   /* Summary: Array names converted to pointers */
}
