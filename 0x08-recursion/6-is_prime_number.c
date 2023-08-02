/*
 * File: 6-is_prime_number.c
 * Author: Fily M Sakine <msakine20@gmail.com>
 */

#include "main.h"

/**
 * _is_divisible_by - check if a number is
 * divisible by a diviser
 *
 * @d: diviser
 * @n: number
 *
 * Return: 1 is divisible
 * Otherwise 0
 */
int _is_divisible_by(int d, int n)
{
	if ((n % d) == 0)
	{
		return (0);
	}
	else if ((n / 2) == d)
	{
		return (1);
	}
	else
	{
		return (_is_divisible_by(d + 1, n));
	}
}

/**
 * is_prime_number - returns 1 if the input integer
 * is a prime number, otherwise return 0
 *
 * @n: number
 *
 * Return: int
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}

	if (n >= 2 && n <= 3)
	{
		return (1);
	}

	return (_is_divisible_by(2, n));
}
