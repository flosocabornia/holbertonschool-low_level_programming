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

void main() {
char str[20];
int length;
clrscr();
   
printf("\nEnter any string : ");
gets(str);
   
length = string_ln(str);
printf("The length of the given string %s is : %d", str, length);
getch();
}
 
int string_ln(char*p) /* p=&str[0] */
{
int count = 0;
while (*p != '\0') {
count++;
p++;
}
return count;
}
