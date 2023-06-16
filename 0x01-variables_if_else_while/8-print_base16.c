#include <stdio.h>
/**
 * main - hexadecimal looks scary so we are outputiing it by loops
 *
 * Return: Always 0 (success)
 */
int main(void)
{
int a;
char b;
a = 0;
b = 'a';
while (a < 10)
{
putchar('0' + a);
a++;
}
while (b <= 'f')
{
putchar(b);
b++;
}
return (0);
}

