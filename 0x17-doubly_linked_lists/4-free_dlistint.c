#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list.
 * @head: the list
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *h = head;

	if (!head)
		return;
	while (head)
	{
		h = head;
		head = head->next;
		free(h);
	}
}
