#include "lists.h"
/**
 * delete_nodeint_at_index - delete a new node at a given position.
 * @head: the list.
 * @index: the position.
 *
 * Return:  1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 1;
	listint_t *temp, *h = *head;

	if (!head || !h)
		return (-1);
	if (index == 0)
	{
		h = (*head)->next;
		free(*head);
		*head = h;
		return (1);
	}
	while (h)
	{
		if (index == i)
		{
			temp = h->next;
			if (!temp)
				return (-1);
			h->next = temp->next;
			free(temp);
			return (1);
		}
		h = h->next;
		i++;
	}
	return (-1);
}
