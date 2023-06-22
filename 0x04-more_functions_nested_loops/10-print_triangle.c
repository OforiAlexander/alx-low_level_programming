#include "main.h"
/**
 * print_triangle - this  prints a triangle, followed by a new line.
 * @size: this the size of the triangle
 */
void print_triangle(int size)
{
	int n, m;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
	for (n = 1; n <= size; n++)
	{
		for (m = n; m <= size; m++)
	{
		_putchar(' ');
	}
		for (m = 1; m <= n; m++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	}
}
