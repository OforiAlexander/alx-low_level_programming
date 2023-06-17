#include <stdio.h>
/**
 * main - this is the nice one and hardest for the for and while loops
 *
 * Return: Always 0 (success)
 */
int main(void)
{
int i;
for (i = 0; i < 10; i++)
{
putchar(i + '0');
if (i != 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
