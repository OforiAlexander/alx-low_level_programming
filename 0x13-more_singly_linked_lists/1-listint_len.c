#include "lists.h"

/**
 * listint_len - this function returns the number of elements in a
 * linked listint_t list.
 * @h: linked list of type listint_t
 *
 * Return: nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t a = 0;

	while (h)
	{
		a++;
		h = h->next;
	}

	return (a);
}
