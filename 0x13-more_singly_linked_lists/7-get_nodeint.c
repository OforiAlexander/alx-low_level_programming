#include "lists.h"

/**
 * get_nodeint_at_index - this function returns the nth node of a
 * listint_t linked list.
 * @head: node in the list
 * @index: index of node to be returned
 *
 * Return: pointer ro node or null
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int uns = 0;
	listint_t *a = head;

	while (a && uns < index)
	{
		a = a->next;
		uns++;
	}

	return (a ? a : NULL);
}
