#include "lists.h"

/**
 * free_listint - this function that frees a listint_t list.
 * @head: list to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *a;

	while (head)
	{
		a = head->next;
		free(head);
		head = a;
	}
}
