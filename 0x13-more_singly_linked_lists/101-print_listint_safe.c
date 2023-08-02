#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - this functions function prints a listint_t linked list.
 * @head: A pointer to listint_t.
 *
 * Return: not -0
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *a, *h;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	a = head->next;
	h = (head->next)->next;

	while (h)
	{
		if (a == h)
		{
			a = head;
			while (a != h)
			{
				nodes++;
				a = a->next;
				h = h->next;
			}

			a = a->next;
			while (a != h)
			{
				nodes++;
				a = a->next;
			}

			return (nodes);
		}

		a = a->next;
		h = (h->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - this functions prints the actual list
 * @head: A pointer listint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, i = 0;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (i = 0; i < nodes; i++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}
