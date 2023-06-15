#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: the list
 * @idx: the index of the list where the new node should be added
 * @n: the element
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *head = *h, *temp = NULL;
	unsigned int i = 0;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	while (head)
	{
		if (i == idx)
			break;
		temp = head;
		head = head->next;
		i++;
	}
	if (!head)
	{
		temp->next = new;
		new->prev = temp;
		return (new);
	}
	temp = head->prev;
	if (head->prev)
		temp->next = new;
	else
		*h = new;
	new->next = head;
	new->prev = temp;
	head->prev = new;
	return (new);
}
