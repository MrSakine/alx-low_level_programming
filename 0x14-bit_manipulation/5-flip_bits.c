/*
 * File: 5-flip_bits.c
 * Author: Fily M Sakine <msakine20@gmail.com>
 */

#include "main.h"

/**
 * flip_bits - returns the number of bits you would
 * need to flip to get from one number to another
 * @n: number to check
 * @m: number
 *
 * Return: unsigned int
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int unit;
	unsigned long int bits;

	unit = n ^ m;
	bits = 0;

	while (unit > 0)
	{
		bits += (unit & 1);
		unit >>= 1;
	}

	return (bits);
}

