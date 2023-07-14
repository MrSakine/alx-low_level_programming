/*
 * File: 9-print_comb.c
 * Author: Fily M Sakine <msakine20@gmail.com>
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Prints all possible combinations
 *        of single-digit numbers
 *
 *
 * Return: Always 0.
 */
int main(void)
{
int n;
int N = 10;
for (n = 0; n < N; n++)
{
putchar(n + '0');
if (n < N - 1)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
