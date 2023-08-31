/*
 * File: 0-binary_to_uint.c
 * Author: Fily M Sakine <msakine20@gmail.com>
 */

#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: string source
 *
 * Return: 0 or converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int unit = 0;
	unsigned int m = 1;
	int len = 0;

	if (*b == '\0')
		return (0);

	while (b[len])
		len++;

	for (len -= 1; len >= 0; len--)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);

		unit += (b[len] - '0') * m;
		m *= 2;
	}

	return (unit);
}
