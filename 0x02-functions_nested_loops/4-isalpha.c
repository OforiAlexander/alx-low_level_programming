#include "main.h"
/**
 * int _isalph - returns a response with char is lower or upper
 * @c: the int to be changed
 * Return: 1 if c is a letter, 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c >= 'z') || (c >= 'A' && c <= 'Z'));
}
