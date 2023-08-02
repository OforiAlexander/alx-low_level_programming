#include "lists.h"

/**
 * free_listint_safe - this  function that frees a listint_t list.
 * @h: pointer to the first node in the linked list
 *
 * Return: free list number
 */
size_t free_listint_safe(listint_t **h)
{
	size_t lenght = 0;
	int a;
	listint_t *b;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		a = *h - (*h)->next;
		if (a > 0)
		{
			b = (*h)->next;
			free(*h);
			*h = b;
			lenght++;
		}
		else
		{
			free(*h);
			*h = NULL;
			lenght++;
			break;
		}
	}

	*h = NULL;

	return (lenght);
}
