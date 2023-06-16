#include <stdio.h>
/**
 * main - This is for the forth teask today on if and while
 *
 * Return: Always 0 (success)
 */
int main(void)
{
char a;
for (a = 'a'; a <= 'z'; a++)
{
if (!(a == 'q' || a == 'e'))
{
putchar(a);
}
}
putchar('\n');
return (0);
}
