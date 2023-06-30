#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to be capitalized.
 *
 * Return: A pointer to the changed string.
 */
char *cap_string(char *str)
{
	int strg = 0;

	while (str[strg])
	{
		while (!(str[strg] >= 'a' && str[strg] <= 'z'))
			strg++;

		if (str[strg - 1] == ' ' ||
		    str[strg - 1] == '\t' ||
		    str[strg - 1] == '\n' ||
		    str[strg - 1] == ',' ||
		    str[strg - 1] == ';' ||
		    str[strg - 1] == '.' ||
		    str[strg - 1] == '!' ||
		    str[strg - 1] == '?' ||
		    str[strg - 1] == '"' ||
		    str[strg - 1] == '(' ||
		    str[strg - 1] == ')' ||
		    str[strg - 1] == '{' ||
		    str[strg - 1] == '}' ||
		    strg == 0)
			str[strg] -= 32;

		strg++;
	}

	return (str);
}
