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
	int *a;

	if (min > max)
	{
		return (NULL);
	}

	a = malloc((max - min + 1) * sizeof(int));

	if (a == NULL)
		return (NULL);

	for (i = 0; i <= max; i++)
	{
		a[i] = min;
		min += 1;
	}

	return (a);
}
