#include "main.h"

/**
 * factorial - this function returns the number of factorial elements
 * @n: number to return the factorial from
 *
 * Return:n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
