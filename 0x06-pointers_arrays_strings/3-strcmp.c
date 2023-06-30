#include "main.h"
/**
 * _strcmp - compares two string values
 * @s1: input value
 * @s2: input value
 *
 * Return s1 - s2
 */
int _strcmp(char *s1, char *s2)
{
	int a;

	a = 0;
	while (s1[a] != '\0' && s2[a] != '\0')
	{
		if (s1[a] != s2[a])
		{
			return (s1[a] - s2[a]);
		}
		a++;
	}
	return (0);
}
