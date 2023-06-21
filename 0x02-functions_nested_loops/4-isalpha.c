#include "main.h"
/**
 * int _isalpha - checking alphabetic characters and returning true or false
 * @c: the character to be checked
 *  Return: 1 if c is a letter, 0 otherwise 1
 */
int _isalpha(int c)
{
	if ((c <= 'A' && c >= 'Z') || (c <= 'a' && c >= 'z'))
		return (1);
	return (0);
}
