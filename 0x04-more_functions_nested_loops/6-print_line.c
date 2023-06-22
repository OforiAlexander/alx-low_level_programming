#include "main.h"
/**
 * print_line - this function that draws a straight line in the terminal.
 * @n: checks the line
 *
 * Return:Always 0
 */
void print_line(int n)
{
	int c;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (c = 1; c <= n; c++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
