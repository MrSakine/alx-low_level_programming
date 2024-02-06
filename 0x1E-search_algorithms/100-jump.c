#include "search_algos.h"

/**
 * jump_search - searches for a value in an array of integers
 * using Jump search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in @array
 * @value: value to search for
 *
 * Return:
 * If array is NULL, your function must return -1
 * otherwise the index of the @value in the @array
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i;
	size_t next_step;
	size_t prev_step;

	if (array == NULL || size == 0)
		return (-1);

	next_step = 0;
	prev_step = 0;

	while (next_step < size && array[next_step] < value)
	{
		prev_step = next_step;
		next_step += sqrt(size);
		printf("Value checked array[%ld] = [%d]\n", prev_step, array[prev_step]);
	}

	printf("Value found between indexes [%ld] and [%ld]\n", prev_step, next_step);

	next_step = next_step > size ? (size - 1) : next_step;
	for (i = prev_step; i < next_step && array[i] < value; i++)
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	printf("Value checked array[%ld] = [%d]\n", i, array[i]);

	return (array[i] == value ? (int)i : -1);
}
