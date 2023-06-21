/**
 * print_to_98 - Prints all natural numbers from n to 98
 *
 * @n: Starting number
 *
 * Description: This function takes an integer n as a parameter and prints
 * all natural numbers from n up to 98
 */
void print_to_98(int n)
{
	/* Loop from n to 98 */
	while (n != 98)
	{
		printf("%d, ", n);
		if (n > 98)
			n--;
		else
			n++;
	}

	printf("%d\n", n);
}

