#include "main.h"
/**
 * print_times_table - printing a multiplication of n
 *
 * Return: Always 0 (success)
 */
void print_times_table(int n)
{
	if (n < 0 || n > 15)
	{return;}

	for (int m = 0; m <= n; m++)
	{
		for (int o = 0; o <= n; o++)
		{
			int multi = m * o;

			if (o == 0)
			{
				_putchar(multi);
			}
			else {
				_putchar(multi);
			}
		}
		_putchar('\n');
	}
}
