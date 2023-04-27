#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list.
 * @h: a pointer to the list
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	int n = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		n++;
		h = h->next;
	}
	return (n);
}
