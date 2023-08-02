#include "lists.h"

/**
 * pop_listint - this function that deletes the head node
 * of a listint_t linked list,
 * and returns the head node’s data (n).
 * @head: element in the linked list
 *
 * Return: deleted data
 */
int pop_listint(listint_t **head)
{
	listint_t *a;
	int nw;

	if (!head || !*head)
		return (0);

	nw = (*head)->n;
	a = (*head)->next;
	free(*head);
	*head = a;

	return (nw);
}
