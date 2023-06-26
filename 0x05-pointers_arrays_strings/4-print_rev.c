#include "main.h"
#include <stdio.h>
/**
 * print_rev - this Write a function that prints a string, in reverse.
 * @s: returns the string
 * Return: s
 */
void print_rev(char *s)
{
	int stg = 0;
int rev;

	while (*s != '\0')
	{
		stg++;
		s++;
	}
	s--;

	for (rev = stg; rev > 0; rev--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
