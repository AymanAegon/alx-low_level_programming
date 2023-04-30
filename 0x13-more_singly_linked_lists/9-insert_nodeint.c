#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: the list.
 * @idx: the position.
 * @n: the data.
 *
 * Return:  the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *prev, *h = *head;
	listint_t *new;
	unsigned int i = 1;

	if (!head)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = h;
		*head = new;
		return (new);
	}
	prev = h;
	h = h->next;
	while (h)
	{
		if (idx == i)
		{
			printf("%d\n", h->n);
			prev->next = new;
			new->next = h;
			return (new);
		}
		i++;
		prev = h;
		h = h->next;
	}
	return (NULL);
}
