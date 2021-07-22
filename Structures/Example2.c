/* Program to store given number of students data using pointers */
#include <stdio.h>
#include <stdlib.h>

typedef struct Student
{
   char name[20];
   int id;
   char course[10];
} student;

int main()
{
   int num = 0;
   student *students;
   printf("Enter number of students: ");
   scanf("%d", &num);

   students = (student *)malloc(num * sizeof(student));

   for (int i = 0; i < num; i++)
   {
      printf("%d. ID: ", i + 1);
      scanf("%d", &(students + i)->id);
      printf("%d. Name: ", i + 1);
      scanf("%s", (students + i)->name);
      printf("%d. Course: ", i + 1);
      scanf("%s", (students + i)->course);
   }

   // now display all the informations
   for (int i = 0; i < num; i++)
   {
      printf("------------------------------------------------\n");
      printf("ID: %d\n", students[i].id);
      printf("Name: %s\n", students[i].name);
      printf("Course: %s\n", students[i].course);
   }
   printf("------------------------------------------------\n");
}