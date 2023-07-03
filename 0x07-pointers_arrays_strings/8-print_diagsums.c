#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - this  function prints the sum of the two diagonals
 * @a: input
 * @size: input
 * Return: Always 0 (Success)
 */
void print_diagsums(int *a, int size)
{
	int n, m, i;

	n = 0;
	m = 0;

	for (i = 0; i < size; i++)
	{
		n = n + a[i * size + i];
	}
	for (i = size - 1; i >= 0; i--)
	{
		m += a[i * size + (size - i - 1)];
	}
	printf("%d, %d\n", n, m);
}
