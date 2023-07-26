/*
 * File: 4-rev_array.c
 * Author: Fily M Sakine <msakine20@gmail.com>
 */

#include "main.h"

/**
 * reverse_array - reverses the content of
 * an array of integers
 *
 * @a: array
 * @n: length of array

 *
 * Return: void.
 */

void reverse_array(int *a, int n)
{
int i;
int x;

for (i = n - 1; i >= n / 2; i--)
{
x = a[i];
a[i] = a[n - i - 1];
a[n - i - 1] = x;
}
}
