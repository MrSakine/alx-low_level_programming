/*
 * File: 8-print_diagsums.c
 * Author: Fily M Sakine <msakine20@gmail.com>
 */

#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers
 *
 * @a: 2D array
 * @size: size of array
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int sum = 0;
	int sum2 = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		sum += a[i];
		a += size;
	}

	a -= size;

	for (i = 0; i < size; i++)
	{
		sum2 += a[i];
		a -= size;
	}

	printf("%d, %d\n", sum, sum2);
}
