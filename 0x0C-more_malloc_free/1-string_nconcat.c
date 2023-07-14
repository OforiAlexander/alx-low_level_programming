#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - this function concatenates n bytes of a strin
 * g to another string
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int a = 0, j = 0, length = 0, length2 = 0;

	while (s1 && s1[length])
		length++;
	while (s2 && s2[length2])
		length2++;

	if (n < length2)
		s = malloc(sizeof(char) * (length + n + 1));
	else
		s = malloc(sizeof(char) * (length + length2 + 1));

	if (!s)
		return (NULL);

	while (a < length)
	{
		s[a] = s1[a];
		a++;
	}

	while (n < length2 && a < (length + n))
		s[a++] = s2[j++];

	while (n >= length2 && a < (length + length2))
		s[a++] = s2[j++];

	s[a] = '\0';

	return (s);
}
