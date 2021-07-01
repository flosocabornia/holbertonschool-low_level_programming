#include "holberton.h"

/**
* _strcat - function that links two strings
* @dest: string 1
* @src: string 2
*
* Return: a pointer to the resulting string dest
*/

char *_strcat(char *dest, char *src);
{
int i = 0, j = 0;

while (dest[i])
i++;
while (src[j])
dest[i++] = src[j++];
return (dest);
}
