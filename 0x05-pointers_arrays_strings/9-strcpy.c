#include "main.h"
/**
 * *_strcpy - this function that copies the string pointed to by src,
 *  including the terminating null byte (\0), to the buffer pointed to by dest.
 *  @dest: copy data to
 *  @src: data from
 *  Return: string pointed to by src
 */
char *_strcpy(char *dest, char *src)
{
int m = 0;
int j = 0;

while (*(src + m) != '\0')
{
m++;
}
for ( ; j < m ; j++)
{
dest[j] = src[j];
}
dest[m] = '\0';
return (dest);

}
