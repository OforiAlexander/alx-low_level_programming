#include "main.h"
/**
 * postitive_or_negative - this checks if a number is positive or negative
 * @i: is the number doing the checks
 *
 * Return: Always 0
 */
void positive_or_negative(int i)
{
	if (i < 0)
	{
		printf("%d is %s\n", i, "negative");
	}
	else if (i > 0)
	{
		printf("%d is %s\n", i, "positive");
	}
	else
	{
		printf("%d is %s\n", i, "zero");
	}
	return;
}
