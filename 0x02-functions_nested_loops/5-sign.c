#include "main.h"
/**
 * print_sign - checks and prints the aproprate signs given
 * @n: the int to be changed
 * Return: 1 and prints + if int is greater than zero
 * 0 and prints 0 if int is zero
 * -1 and prints - if int is less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
