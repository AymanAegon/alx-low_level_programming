#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_search - searches for a value in a sorted array of integers
 * using the Jump search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: the index where value is located
 */
int jump_search(int *array, size_t size, int value)
{
	size_t a = 0, b = 0;

	if (array == NULL)
		return (-1);

	while (value > array[b])
	{
		if (b == size - 1)
			break;
		printf("Value checked array[%ld] = [%d]\n", b, array[b]);
		a = b;
		b = b + sqrt(size);
		if (b >= size)
			b = size - 1;
		if (a >= size)
			return (-1);
	}
	printf("Value found between indexes [%ld] and [%ld]\n", a, b);
	while (value >= array[a])
	{
		printf("Value checked array[%ld] = [%d]\n", a, array[a]);
		if (array[a] == value)
			return (a);
		a++;
		if (a == size)
			return (-1);
	}
	return (-1);
}
