#include "main.h"
/**
 * _strlen - this Write a function that returns the length of a string.
 * @s: returns a string
 * Return: s
 */
int _strlen(char *s)
{
int stg = 0;

while (*s != '\0')
{                
stg++;
s++;
}
return (stg);
}

