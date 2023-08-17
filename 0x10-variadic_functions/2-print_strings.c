/*
 * File: 2-print_strings.c
 * Author: Fily M Sakine <msakine20@gmail.com>
 */

#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line
 *
 * @n: length of parameters
 * @separator: string to be printed between numbers
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *s;
	va_list listOfArgs;

	va_start(listOfArgs, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(listOfArgs, char *);

		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);

		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(listOfArgs);
}
