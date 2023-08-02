#include "lists.h"

/**
 * delete_nodeint_at_index - this function that deletes the node at index
 * index of a listint_t linked list.
 * @head: pointer to the first element in the list
 * @index: nodes to be deleted
 *
 * Return: results
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *hd = *head;
	listint_t *nw = NULL;
	unsigned int uns = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(hd);
		return (1);
	}

	while (uns < index - 1)
	{
		if (!hd || !(hd->next))
			return (-1);
		hd = hd->next;
		uns++;
	}


	nw = hd->next;
	hd->next = nw->next;
	free(nw);

	return (1);
}
