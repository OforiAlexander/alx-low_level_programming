#include <stdio.h>
/**
 * main - printing Hexadecimal charaxters
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int a;

	for (a = 0; a < 16; a++)
		if (a < 10)
		{
			putchar('0' + a);
		}
		else
		{
	putchar('a' + a);
		}
	putchar('\n');
	return (0);
}
