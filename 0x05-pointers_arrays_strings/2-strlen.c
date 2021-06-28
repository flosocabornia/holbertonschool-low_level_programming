/*
 * File: 2-starlen.c
 * Auth: Florencia Soca
 */
#include "holberton.h"

/**
* 2-starlen.c -a function that returns the length of a string
* @s: puntero
* Return: (0)
*/
int _strlen(char *s);
{
char s[1000];
int c = 0;

printf("Input a string\n");
gets(s);

while (s[c] != '\0')
c++;

printf("Length of the string: %d\n", c);

return (0);
}
