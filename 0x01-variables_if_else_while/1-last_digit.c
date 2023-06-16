#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Second project for the if and if else condition
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
int holder = n % 10;
if (holder > 5)
{
	printf("Last digit of %d is %d and is greater than 5\n", n, holder);
}
else if (holder == 0)
{
	printf("Last digit of %d is %d and is 0\n", n, holder);
}
else if (holder < 5)
{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, holder);
}
return (0);
}
}
