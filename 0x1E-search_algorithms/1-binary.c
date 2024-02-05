#include "search_algos.h"

/**
 * binary_search - searches for a value in an array of integers
 * using Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in @array
 * @value: value to search for
 *
 * Return:
 * If array is NULL, your function must return -1
 * otherwise the index of the @value in the @array
 */
int binary_search(int *array, size_t size, int value)
{
	int start;
	int end;
	int center;

	if (array == NULL)
		return (-1);

	start = 0;
	end = size - 1;
	print_array_util(array, start, end);

	while (start < end)
	{
		center = start + (end - start) / 2;
		if (array[center] < value)
		{
			start = center + 1;
			print_array_util(array, start, end);
		}
		else if (array[center] > value)
		{
			end = center - 1;
			print_array_util(array, start, end);
		}
		else
			return (center);
	}

	return (-1);
}

/**
 * print_array_util - print array elements
 * @array: pointer to the first element of the array to search in
 * @start: starting point in @array
 * @end: ending point in @array
 */
void print_array_util(int *array, int start, int end)
{
	int i;
	int flag = 0;

	printf("Searching in array: ");
	for (i = start; i <= end; i++)
	{
		if (flag)
			printf(", ");
		printf("%d", array[i]);
		flag = 1;
	}

	printf("\n");
}

