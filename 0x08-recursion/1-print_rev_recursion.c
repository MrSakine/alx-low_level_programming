/*
 * File: 1-print_rev_recursion.c
 * Author: Fily M Sakine <msakine20@gmail.com>
 */

#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 *
 * @s: string to print
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		/* _putchar('\n'); */
		return;
	}

	_print_rev_recursion(s + 1);

	_putchar(*s);
}
