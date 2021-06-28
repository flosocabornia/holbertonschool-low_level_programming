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
int len1, len2;

char string1[] = "Hello";
char string2[] = {'c', 'o', 'm', 'p', 'u', 't', 'e', 'r', '\0'};

len1 = strlen(string1);
len2 = strlen(string2);

printf("Length of string1 is: %d \n", len1);
printf("Length of string2 is: %d \n", len2);
}
