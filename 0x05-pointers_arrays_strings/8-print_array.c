/*
 * File: 8-print_array.c
 * Author: Fily M Sakine <msakine20@gmail.com>
 */

#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * followed by a new line
 *
 * @a: array of numbers
 * @n: limit
 *
 * Return: void.
 */

void print_array(int *a, int n)
{
int i;

for (i = 0; i < n; i++)
{
printf("%d", a[i]);

if (i < n - 1)
{
printf(",");
printf(" ");
}
}

printf("\n");
}
