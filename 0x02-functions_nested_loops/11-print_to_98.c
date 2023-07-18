/*
 * File: 11-print_to_98.c
 * Author: Fily M Sakine <msakine20@gmail.com>
 */

#include "main.h"
#include <stdio.h>

/**
* print_to_98 - Prints all natural numbers from n to 98
* followed by a new line
* @n: number to stop at
*
* Return: void
*/

void print_to_98(int n)
{
int i;
int N = 98;
if (n > N)
{
for (i = n; i >= N; i--)
{
printf("%d", i);
if (i > N)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
}
else if (n == N)
{
printf("%d\n", n);
}
else
{
for (i = n; i <= N; i++)
{
printf("%d", i);
if (i < N)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
}
return;
}
