#include "lists.h"

/**
 * reverse_listint - this function reverses a listint_t linked list.
 * @head: pointer to the list
 *
 * Return: reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *a = NULL;
	listint_t *b = NULL;

	while (*head)
	{
		b = (*head)->next;
		(*head)->next = a;
		a = *head;
		*head = b;
	}

	*head = a;

	return (*head);
}
