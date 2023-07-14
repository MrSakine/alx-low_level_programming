/*
 * File: 100-print_comb3.c
 * Author: Fily M Sakine <msakine20@gmail.com>
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Prints all possible different
 *        combinations of two digits
 *
 *
 * Return: Always 0.
 */
int main(void)
{
int n;
int m;
int N = 10;
for (n = 0; n < N; n++)
{
for (m = n + 1; m < N; m++)
{
putchar(n + '0');
putchar(m + '0');
if (n < N - 2)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
