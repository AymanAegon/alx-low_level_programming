#include "lists.h"
/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: the list.
 *
 * Return:  a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *h = *head, *temp = NULL;

	if (head == NULL || *head == NULL)
		return (NULL);
	while ((*head)->next)
	{
		h = (*head)->next;
		(*head)->next = temp;
		temp = *head;
		*head = h;
	}
	(*head)->next = temp;
	return (*head);
}
