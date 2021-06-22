/*
 * File: 1-alphabet.c
 * Auth: Florencia Soca
 */

#include "holberton.h"
/**
*main - prints alphabet
*Return: 0
*/
void print_alphabet(void)
{
	char letter;
for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
 
	_putchar('\n');
}
