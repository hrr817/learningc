#include <stdio.h>
#include <string.h>

// custom data type, person
typedef struct Person
{
   char *name;
   int age;
} person;

/**
 * Creates a person (structure) with given parameters
 * @param name string
 * @param age int
 * @returns person
 */
person createPerson(char *name, int age);

/** this function takes person as an argument
 * access its values and prints it out 
 * @param person
 */
void displayPerson(person someone);

// nested structss
typedef struct Population
{
   // an array of persons
   person people[5];
   int last;
} population;

/** Addes given person to given population
 * @param p person
 * @param popu population
 */
void addToPopulation(person p, population *popu);

int main()
{
   // one way to declare and initialize struct
   person dennis = {.name = "Dennis Ritchie", .age = 49};
   displayPerson(dennis);
   person alex = createPerson("Alexandra", 28);
   person ruby = createPerson("Ruby", 19);
   person mighty_guy = createPerson("Mighty Guy", 7);

   population ofAmerica = {.last = 0};
   addToPopulation(dennis, &ofAmerica);
   addToPopulation(alex, &ofAmerica);
   addToPopulation(ruby, &ofAmerica);
   addToPopulation(mighty_guy, &ofAmerica);

   printf("---------------- Looping over population ------------------\n");
   for (int i = 0; i < ofAmerica.last; i++)
   {
      displayPerson(ofAmerica.people[i]);
   }
}

// a funciton to create a struct data,
person createPerson(char *name, int age)
{
   // other way to initialize a structure
   person new_person = {name, age};
   return new_person;
}

void displayPerson(person someone)
{
   printf("-----------------------------------------------------------\n");
   printf("Name: %s\n", someone.name);
   printf("- Length: %ld\n", strlen(someone.name));
   printf("- Size: %ld\n", sizeof(someone.name));
   printf("Age: %d\n", someone.age);
   printf("- Size: %ld\n", sizeof(someone.age));
}

// passing struct by refernce
void addToPopulation(person p, population *popu)
{
   /* we have refernce of population */
   /* we can make changes to population */

   popu->people[popu->last] = p; // let's set given person to last index
   popu->last += 1;              // increase index by 1
}