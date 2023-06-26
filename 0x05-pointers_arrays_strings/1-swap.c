#include "main.h"
/**
 * swap_int - this Write a function that swaps the values of two integers.
 * @a: first integer holder
 * @b: last int holder
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
