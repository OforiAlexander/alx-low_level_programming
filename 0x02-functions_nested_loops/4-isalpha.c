#include "main.h"
/**
 * _isalpha - this checks for alphabetical characters
 * @c: the int to be changed
 * Return: 1 if int is a letter, 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));

}
