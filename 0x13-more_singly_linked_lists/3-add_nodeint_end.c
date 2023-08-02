#include "lists.h"

/**
 * add_nodeint_end - this function adds a new node at the beginnin
 * g of a listint_t
 * list.
 * @head: pointer to list
 * @n: data to insert
 *
 * Return: pointer, null or fail
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nw;
	listint_t *a = *head;

	nw = malloc(sizeof(listint_t));
	if (!nw)
		return (NULL);

	nw->n = n;
	nw->next = NULL;

	if (*head == NULL)
	{
		*head = nw;
		return (nw);
	}

	while (a->next)
		a = a->next;

	a->next = nw;

	return (nw);
}
