#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * support - support function
 * @array: a pointer to the first element of the array to search in
 * @l: left index
 * @r: right index
 * @value: the value to search for
 *
 * Return: the index where value is located
 */
int support(int *array, size_t l, size_t r, int value)
{
	size_t mid = (l + r) / 2, i;

	if (l > r)
		return (-1);
	printf("Searching in array: ");
	for (i = l; i < r; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);

	if (value > array[mid])
		return (support(array, mid + 1, r, value));
	else if (value < array[mid])
		return (support(array, l, mid - 1, value));
	else
	{
		while (mid > 0 && value == array[mid - 1])
			mid--;
		return (mid);
	}
}

/**
 * advanced_binary - searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: the index where value is located
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);

	return (support(array, 0, size - 1, value));
}
