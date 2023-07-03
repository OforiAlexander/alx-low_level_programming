#include "main.h"
/**
 * _memcpy - this function that copies memory
 * @dest: memory stored
 * @src: memory copied
 * *@n: number of bytes
 *
 * Return: copied memory
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a = 0;
	int b = n;

	for (; a < b; a++)
	{
		dest[a] = src[a];
		n--;
	}
	return (dest);
}
