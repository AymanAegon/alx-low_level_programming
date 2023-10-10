#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "search_algos.h"

/**
 * exponential_search - searches for a value in a sorted array of integers
 * using the exponential search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: the index where value is located
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t a = 0, b = 1, i, mid;

	if (array == NULL)
		return (-1);

	while (value > array[b])
	{
		if (b == size - 1)
			break;
		printf("Value checked array[%ld] = [%d]\n", b, array[b]);
		a = b;
		b = b * 2;
		if (b >= size)
			b = size - 1;
		if (a >= size)
			return (-1);
	}
	printf("Value found between indexes [%ld] and [%ld]\n", a, b);
	while (a <= b)
	{
		mid = (a + b) / 2;
		printf("Searching in array: ");
		for (i = a; i < b; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);
		if (value > array[mid])
			a = mid + 1;
		else if (value < array[mid])
			b = mid - 1;
		else
			return (mid);
	}
	return (-1);
}
