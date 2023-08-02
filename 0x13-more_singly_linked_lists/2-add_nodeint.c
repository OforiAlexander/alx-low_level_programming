#include "lists.h"

/**
 * add_nodeint - this function adds a new node at the beginning of a listint_t
 * list.
 * @head: pointer to node in list
 * @n: data to insert
 *
 * Return: pointer, null or false
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nw;

	nw = malloc(sizeof(listint_t));
	if (!nw)
		return (NULL);

	nw->n = n;
	nw->next = *head;
	*head = nw;

	return (nw);
}
