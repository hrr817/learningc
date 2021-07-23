#include <stdio.h>

/**
 * Get length of the given string
 * @param str reference of a string or pointer to char
 * @returns int length of a given string
 */
int len(const char *str);

/**
 * Reverse a given string
 * @param char*
 * @return nothing
 */
void reverse(char *str);

int main() {
  char name[] = "Dennis Ritchie";
  reverse(name);
  printf("%s\n", name);
}

int len(const char *str) {
  int len = 0;
  for (len; str[len] != '\0'; len++);
  return len;
}

void reverse(char *str) {
  int length = len(str);

  int i = 0, j = length - 1, halve = length / 2;

  while (i <= halve && j >= halve) {
    char t = *(str + j);
    str[j] = *(str + i);
    str[i] = t;
    i++;
    j--;
  }
}