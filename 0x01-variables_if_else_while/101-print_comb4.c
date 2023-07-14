/*
 * File: 101-print_comb4.c
 * Author: Fily M Sakine <msakine20@gmail.com>
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Prints all possible different
 *        combinations of three digits
 *
 *
 * Return: Always 0.
 */
int main(void)
{
int n;
int m;
int u;
int N = 10;
for (n = 0; n < N; n++)
{
for (m = n + 1; m < N; m++)
{
for (u = m + 1; u < N; u++)
{
putchar(n + '0');
putchar(m + '0');
putchar(u + '0');
if (n < N - 3)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
