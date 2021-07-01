#include "holberton.h"

/**
* _strcat - function that links two strings
* @dest: string 1
* @src: string 2
*
* Return: a pointer to the resulting string dest
*/

char *_strcat(char *dest, char *src)
{
	int dlen = 0, i;

	while (dest[dlen])
	{
		dlen++;
	}

	for (i = 0; src[i] != 0; i++)
	{
		dest[dlen] = src[i];
		dlen++;
	}

	dest[dlen] = '\0';
	return (dest);
}
