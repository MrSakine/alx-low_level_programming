/*
 * File: 2-int_index.c
 * Author: Fily M Sakine <msakine20@gmail.com>
 */

#include "function_pointers.h"

/**
 * int_index - searches for an integer
 *
 * @array: array of integers
 * @size: size of array
 * @cmp: function pointer
 *
 * Return: If no element matches, return -1
 * If size <= 0, return -1
 * Otherwise, the index of the first element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		int c = cmp(array[i]);

		if (c != 0)
		{
			return (i);
		}
	}

	return (-1);
}
