#include "main.h"

/**
 * print_alphabet_x10 - We are printing the alphabets 10 times
 *
 * Return: Always 0 (succes)
 */
void print_alphabet_x10(void)
{
	int cx;

	cx = 0;

	while (cx < 10)
	{
		char j;

		j = 'a';
		while (j <= 'z')
		{
			_putchar(j);
		j++;
		}
		_putchar('\n');
		cx++;
	}
}
