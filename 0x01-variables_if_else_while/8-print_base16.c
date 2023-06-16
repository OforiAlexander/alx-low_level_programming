#include <stdio.h>
/**
 * main - printing Hexadecimal charaxters
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int a;

	char b;

	a = 0;
	b = 'a';
	while
		(a < 10)
		{
			putchar(a + '0');
			a++;
		}
	while
		(b <= 16)
		{
			putchar(b);
			b++;
		}
	putchar('\n');
	return (0);
}
