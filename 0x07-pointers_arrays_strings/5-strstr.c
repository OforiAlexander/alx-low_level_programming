#include "main.h"
/**
 * _strstr - this  function locates a substring.
 * @haystack: input
 * @needle: input
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *c = haystack;
		char *cc = needle;

		while (*c == *cc && *cc != '\0')
		{
			c++;
			cc++;
		}

		if (*cc == '\0')
			return (haystack);
	}
	return (0);
}
