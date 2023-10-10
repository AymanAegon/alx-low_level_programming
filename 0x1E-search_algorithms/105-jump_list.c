#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_list - searches for a value in a sorted list of integers
 * using the Jump search algorithm
 * @list: a pointer to the head of the list to search in
 * @size: the number of elements in list
 * @value: the value to search for
 *
 * Return: the index where value is located
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	listint_t *a = list, *b = list->next, *c;

	if (list == NULL)
		return (NULL);

	while (b != NULL)
	{
		if (b->index % (size_t)sqrt(size) == 0 || b->index == size - 1)
		{
			printf("Value checked at index [%d] = [%d]\n", b->index, b->n);
			if (b->n > value)
				break;
			if (b->index != size - 1)
				a = b;
		}
		c = b;
		b = b->next;
	}
	printf("Value found between indexes ");
	if (!b)
		printf("[%d] and [%d]\n", a->index, c->index);
	else
		printf("[%d] and [%d]\n", a->index, b->index);

	while (a != b)
	{
		printf("Value checked at index [%d] = [%d]\n", a->index, a->n);
		if (a->n == value)
			return (a);
		a = a->next;
	}
	return (NULL);
}
