#include "main.h"
/**
 * _strlen_recursion - this  function returns the length of a string.
 * @s: The string.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	int stg = 0;

	if (*s)
	{
		stg++;
		stg += _strlen_recursion(s + 1);
	}

	return (stg);
}
