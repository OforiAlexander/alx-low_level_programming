#include "lists.h"

/**
 * sum_listint - this function returns the sum of all
 * the data (n) of a listint_t linked list.
 * @head: node in list
 *
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *a = head;

	while (a)
	{
		sum += a->n;
		a = a->next;
	}

	return (sum);
}
