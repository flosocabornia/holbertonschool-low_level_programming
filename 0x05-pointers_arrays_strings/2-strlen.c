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
{
int c = 0;

while (*s[c] != '\0')
c++;

return (c);
}
