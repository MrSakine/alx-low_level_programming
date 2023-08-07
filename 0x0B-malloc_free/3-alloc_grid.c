/*
 * File: 3-alloc_grid.c
 * Author: Fily M Sakine <msakine20@gmail.com>
 */

#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to
 * a 2 dimensional array of integers
 *
 * @width: row
 * @height: column
 *
 * Return: NULL is passed, treat it as an empty string
 * On success, a pointer should point to a newly allocated space in memory
 * NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int **g;
	int i;
	int j;

	if (width <= 0 || height <= 0)
		return (NULL);

	g = malloc(sizeof(int *) * height);

	if (g == NULL)
		return (NULL);

	for (j = 0; j < height; j++)
	{
		g[j] = malloc(sizeof(int) * width);
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			g[i][j] = 0;
		}
	}

	return (g);
}
