#include "main.h"

/**
 * int _islower - function that checks for the lower case characters
 *@c is the char to be checked
 * Return: 1 if char is lowercase, otherwise 0.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else {
	return (0);
	}
}
