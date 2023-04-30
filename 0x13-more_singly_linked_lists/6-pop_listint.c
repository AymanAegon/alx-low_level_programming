#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: the list.
 *
 * Return: the head node’s data
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *h = *head;

	if (*head == NULL)
		return (0);
	n = (*head)->n;
	(*head) = (*head)->next;
	free(h);
	return (n);
}
