#include <stdio.h>
/**
 * main - this is reversing the alphabets
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char r;

	for (r = 'a'; r <= 'z'; r--)
		putchar(r);
	putchar('\n');
	return (0);
}
