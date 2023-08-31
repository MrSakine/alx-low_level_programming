/*
 * File: 3-set_bit.c
 * Author: Fily M Sakine <msakine20@gmail.com>
 */

#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: number to check
 * @index: index to look for
 *
 * Return: int
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n = (*n ^ (1 << index));
	return (1);
}

