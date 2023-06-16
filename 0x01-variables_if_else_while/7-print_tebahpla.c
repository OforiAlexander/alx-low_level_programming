#include <stdio.h>
/**
 * main - this is reversing the alphabets
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char r;

	for (r = 'z'; r >= 'a'; r--)
		putchar(r);
	putchar('\n');
	return (0);
}
