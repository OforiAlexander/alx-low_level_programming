#include "lists.h"

/**
 * find_listint_loop - this function finds the loop in a linked list.
 * @head: the linked list searched for
 *
 * Return: node address or null
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *a = head;
	listint_t *b = head;

	if (!head)
		return (NULL);

	while (a && b && b->next)
	{
		b = b->next->next;
		a = a->next;
		if (b == a)
		{
			a = head;
			while (a != b)
			{
				a = a->next;
				b = b->next;
			}
			return (b);
		}
	}

	return (NULL);
}
