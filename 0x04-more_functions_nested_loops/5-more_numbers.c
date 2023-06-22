#include "main.h"
/**
 * more_numbers - this prints 10 times the numbers, from 0 to 14,.
 *
 * Return: Always 0
 */
void more_numbers(void)
{
	int c, j;

	for (c = 0; c < 10; c++)
	{
		for (j = 0; j < 15; j++)
		{
			if (j >= 10)
 _putchar(j / 10 + '0');
 _putchar(j % 10 + '0');
		}
		_putchar('\n');
	}
}
