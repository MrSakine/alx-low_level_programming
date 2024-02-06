#include "search_algos.h"

/**
 * interpolation_search - searches for a value in an array of integers
 * using Interpolation search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in @array
 * @value: value to search for
 *
 * Return:
 * If array is NULL, your function must return -1
 * otherwise the index of the @value in the @array
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t middle, low, high;
	size_t operand_1, operand_2;

	if (array == NULL || size == 0)
		return (-1);

	high = size - 1;
	low = 0;

	while (high >= low)
	{
		operand_1 = (value - array[low]) * (high - low);
		operand_2 = (array[high] - array[low]);
		middle = low + (operand_1 / operand_2);

		if (middle < size)
		{
			printf("Value checked array[%ld] = [%d]\n", middle, array[middle]);
		}
		else
		{
			printf("Value checked array[%ld] is out of range\n", middle);
			break;
		}

		if (array[middle] == value)
			return (middle);
		else if (array[middle] > value)
			high -= 1;
		else
			low += 1;
	}

	return (-1);
}
