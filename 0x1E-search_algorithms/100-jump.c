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
	size_t step;
	int result;

	if (array == NULL)
		return (-1);

	next_step = sqrt(size);
	prev_step = 0;
	result = -1;

	while (prev_step <= size)
	{
		printf("Value checked array[%ld] = [%d]\n",
			   prev_step, array[prev_step]);
		for (i = prev_step; i <= next_step; i++)
			if (array[i] == value)
				result = (int)i;

		if (result != -1 || next_step > size)
		{
			printf("Value found between indexes [%ld] and [%ld]\n",
				   prev_step, next_step);
			break;
		}

		prev_step = next_step;
		next_step += sqrt(size);
	}

	step = result == -1 ? (size - 1) : (size_t)result;
	for (i = prev_step; i <= step; i++)
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);

	return (result);
}
