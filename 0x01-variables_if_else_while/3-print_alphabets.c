#include <stdio.h>
/**
 * main - This is looping for both capitals and small alphabets
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char a;
char B;
for (a = 'a'; a <= 'z'; a++)
{
putchar(a);
}
for (B = 'A'; B <= 'Z'; B++)
{
putchar(B);
}
putchar('\n');
return (0);
}
