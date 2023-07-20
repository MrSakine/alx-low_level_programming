/*
 * File: 7-print_diagonal.c
 * Author: Fily M Sakine <msakine20@gmail.com>
 */

#include "main.h"

/**
 * print_diagonal - Draws a diagonal line on the terminal
 * @n: number of times the character '\'
 * should be printed
 *
 * Return: void
 */

void print_diagonal(int n)
{
int i;
int j;
char c;
if (n > 0)
{
c = 92;
for (i = 0; i < n; i++)
{
for (j = 0; j < n; j++)
{
if (j == i)
{
_putchar(c);
_putchar('\n');
break;
}
else
{
_putchar(' ');
}
}
}
}
else
{
_putchar('\n');
}
return;
}
