/*
 * File: 101-print_number.c
 * Author: Fily M Sakine <msakine20@gmail.com>
 */

#include "main.h"

/**
 * print_number - prints an integer
 *
 * @n: integer to print
 *
 * Return: void.
 */
void print_number(int n)
{
	unsigned int num = 0;
	int m;

	if (n < 0)
	{
		_putchar('-');
		num = -n;
	}
	else
	{
		num = n;
	}

	m = num;

	if (num / 10)
	{
		print_number(num / 10);
	}

	_putchar((m % 10) + '0');
}
