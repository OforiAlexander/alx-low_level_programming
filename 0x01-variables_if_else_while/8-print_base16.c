#include <stdio.h>
/**
 * main - hexadecimal looks scary so we are outputiing it by loops
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char a;

	int b;

	for (b = 0; b < 10; b++)
	{
		putchar(b);
	}

	for (a = 'a'; a <= 'f'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}

