/*
 * File: 3-print_numbers.c
 * Author: Fily M Sakine <msakine20@gmail.com>
 */

#include "main.h"

/**
 * print_numbers - Print the numbers
 * from 0 to 9, followed by a new line
 *
 * Return: void
 */

void print_numbers(void) {
int n = 9;
int i;
for (i = 0; i <= n; i++)
{
_putchar(i + '0');
}
_putchar('\n');
return;
}
