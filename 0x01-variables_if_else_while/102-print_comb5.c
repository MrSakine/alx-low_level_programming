/*
 * File: 102-print_comb5.c
 * Author: Fily M Sakine <msakine20@gmail.com>
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Prints all possible combinations
 *        of two two-digit numbers
 *
 *
 * Return: Always 0.
 */
int main(void)
{
int n;
int m;
int z;
int y;
int N = 10;
for (n = 0; n <= N - 1; n++)
{
for (m = n; m <= N - 1; m++)
{
for (z = m; z <= N - 1; z++)
{
for (y = 0; y <= N - 1; y++)
{
putchar(n + '0');
putchar(m + '0');
putchar(' ');
putchar(z + '0');
putchar(y + '0');
if (n < N)
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
