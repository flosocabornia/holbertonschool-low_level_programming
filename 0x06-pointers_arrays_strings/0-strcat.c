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
int a, b;

a = 0, b = 0;

while (dest[a])
a++;
while (src[b])
dest[a++] = src[b++];
return (dest);
}
