/*
 * File: 5-more_numbers.c
 * Author: Fily M Sakine <msakine20@gmail.com>
 */

#include "main.h"

/**
 * more_numbers - Print 10 times the numbers
 * from 0 to 14, followed by a new line
 *
 * Return: void
 */

void more_numbers(void)
{
int n = 10;
int m = 14;
for (int i = 0; i <= n; i++)
{
for (int j = 0; j <= m; j++)
{
if (j > 9)
{
_putchar((j / 10) + '0');
}
_putchar((j % 10) + '0');
}
_putchar('\n');
}
return;
}
