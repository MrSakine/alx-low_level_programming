/*
 * File: 1-print_numbers.c
 * Author: Fily M Sakine <msakine20@gmail.com>
 */

#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line
 *
 * @n: length of parameters
 * @separator: string to be printed between numbers
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list listOfArgs;

	if (n == 0)
		return;

	va_start(listOfArgs, n);

	for (i = 0; i < n; i++)
	{
		if (separator != NULL && i < n - 1)
		{
			printf("%d%s", va_arg(listOfArgs, unsigned int), separator);
		}
		else
		{
			printf("%d", va_arg(listOfArgs, unsigned int));
		}
	}

	va_end(listOfArgs);

	printf("\n");

	return;
}
