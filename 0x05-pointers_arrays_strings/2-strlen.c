/*
 * File: 2-starlen.c
 * Auth: Florencia Soca
 */
#include "holberton.h"

/**
* _starlen -a function that returns the length of a string
* @s: puntero
* Return: (0)
*/
int _strlen(char *s);
int main() {
  char str[20], *pt;
  int i = 0;
  printf("Pointer Example Program : Find or Calculate Length of String \n");
  printf("Enter Any string [below 20 chars] : ");
  gets(str);
  pt = str;
  while (*pt != '\0') {
    i++;
    pt++;
  }
  printf("Length of String : %d", i);

  return 0;
}
