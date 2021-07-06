#include "holberton.h"
/**
 * _strchr - function that locate a character in a string
 * @s:string
 * @c:char
 * Return:pointer to the first occurrence of the character c char*
 */
char *_strchr(char *s, char c)
{

	do		{

		if (*s == c)
			{
			break;
			}
		}	while (*s++);

return (s);
}
