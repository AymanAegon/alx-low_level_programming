#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index
 * @head: the list
 * @idx: the index
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *h = *head, *prev, *next;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(h);
		return (1);
	}
	while (h && i < index)
	{
		h = h->next;
		i++;
	}
	if (i < index)
		return (-1);
	next = h->next;
	prev = h->prev;
	prev->next = next;
	next->prev = prev;
	free(h);
	return (1);
}
