#include <stdio.h>

void spreadMessage(char msg[]);

int main()
{
   // create a string
   char message[] = "One day you leave this world behind so live a life you will remember!";
   spreadMessage(message);
}

// function for spreading message, takes string or array of chars as params
void spreadMessage(char msg[])
{
   puts(msg);
}