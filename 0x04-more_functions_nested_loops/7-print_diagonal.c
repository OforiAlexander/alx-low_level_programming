#include "main.h"
/**
 * print_diagonal - this draws a diagonal line on the terminal.
 * @n: number that prints the character /
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int c;

		for (c = 1; c <= n; c++)
		{
			_putchar('\\');
			_putchar('\n');
		}
		_putchar('\n');
	}
}
