#include "main.h"
/**
 * _puts - this Write a function that prints a string, to stdout
 * @str: writes the string
 * Return: string
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
