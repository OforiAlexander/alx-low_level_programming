#include "main.h"
/**
 * _strncat - this concatenates two strings using n bytes from src.
 * @dest: inputs the value
 * @src: inputs the value
 * @n: inputs the value
 *
 * Returm: Strings
 */
char *_strncat(char *dest, char *src, int n)
{
	int a;
	int b;

	a = 0;
	while (dest[a] != '\0')
		a++;
	b = 0;
	while (a < n && src[a] != '\0')
	{	dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
