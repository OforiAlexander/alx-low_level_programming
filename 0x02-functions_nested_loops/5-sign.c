#include "main.h"
/**
 * print_sign - printing a sign of a number to return + 0 or -
 * @n: the int to check
 * Returns 1 and prints + if int is greater than zero
 * Returns 0 and prints 0 if int is zero
 * Returns -1 and prints - if int is less than zero
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
