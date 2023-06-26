#include "main.h"
/**
 * print_array - this function prints n elements of an array of integers
 * @a: array name
 * @n: number of array to be printed
 * Return: array inputs
 */
void print_array(int *a, int n)
{
	int b;

	b = 0;
	while (b < (n - 1))
	{
		printf("%d, ", a[b]);
		b++;
	}
	if (b == (n - 1))
		printf("%d", a[n - 1]);
	printf("\n");
}
