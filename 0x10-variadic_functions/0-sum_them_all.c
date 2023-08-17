/*
 * File: 0-sum_them_all.c
 * Author: Fily M Sakine <msakine20@gmail.com>
 */

#include "variadic_functions.h"

/**
 * sum_them_all - sum of all its parameters
 *
 * @n: length of parameters
 *
 * Return: int
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list listOfArgs;

	if (n == 0)
		return (0);

	va_start(listOfArgs, n);

	for (i = 0; i < n; i++)
		sum += va_arg(listOfArgs, unsigned int);

	va_end(listOfArgs);

	return (sum);
}
