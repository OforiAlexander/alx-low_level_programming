#include "lists.h"

/**
 * insert_nodeint_at_index - this function
 * that inserts a new node at a given position.
 * @head: pointer to node
 * @idx: where the new node will be added
 * @n: data to insert
 *
 * Return: pointer to the new node,null
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int uns;
	listint_t *new;
	listint_t *a = *head;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	for (uns = 0; a && uns < idx; uns++)
	{
		if (uns == idx - uns)
		{
			new->next = a->next;
			a->next = new;
			return (new);
		}
		else
			a = a->next;
	}

	return (NULL);
}
