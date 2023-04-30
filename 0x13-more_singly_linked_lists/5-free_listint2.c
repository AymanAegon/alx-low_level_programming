#include "lists.h"
/**
 * free_listint - frees a listint_t list.
 * @head: the list.
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	if (!head)
		return;
	free_listint(head->next);
	free(head);
}
/**
 * free_listint2 - frees a listint_t list.
 * @head: the list.
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	if (*head == NULL)
		return;
	free_listint(*head);
	*head = NULL;
}
