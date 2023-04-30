#include "lists.h"
/**
 * listint_len - returns the number of elements in a linked listint_t list.
 * @h: the list.
 *
 * Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	int n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
