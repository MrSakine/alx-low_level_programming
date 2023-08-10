/*
 * File: 3-array_range.c
 * Author: Fily M Sakine <msakine20@gmail.com>
 */

#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 *
 * @min: minimum element
 * @size: maximum element
 *
 * Return: pointer to the allocated memory
 */
int *array_range(int min, int max)
{
	int i;
	int size;
	int *a;

	if (min > max)
	{
		return (NULL);
	}

	size = (max - min + 1)
	a = malloc(size * sizeof(int));

	if (a == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		a[i] = min;
		min += 1;
	}

	return (a);
}
