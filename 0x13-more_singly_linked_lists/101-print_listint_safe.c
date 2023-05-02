#include "lists.h"
/**
 * a - make a new array of nodes with new node
 * @old: the old list to append
 * @size: size of the new array
 * @new: new node to add to the array
 *
 * Return: pointer to the new array
 */
const listint_t **a(const listint_t **old, size_t size, const listint_t *new)
{
	const listint_t **arr;
	size_t i;

	arr = malloc(size * sizeof(listint_t *));
	if (!arr)
	{
		free(old);
		exit(98);
	}
	for (i = 0; i < size - 1; i++)
		arr[i] = old[i];
	arr[i] = new;
	free(old);
	return (arr);
}
/**
 * print_listint_safe - reverses a listint_t linked list.
 * @head: the list.
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t n = 0, size = 0, i;
	const listint_t **arr = NULL;

	while (head)
	{
		for (i = 0; i < size; i++)
		{
			if (arr[i] == head)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free(arr);
				return (size);
			}
		}
		size++;
		printf("[%p] %d\n", (void *)head, head->n);
		arr = a(arr, size, head);
		head = head->next;
	}
	free(arr);
	return (n);
}
