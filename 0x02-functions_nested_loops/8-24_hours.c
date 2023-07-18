/*
 * File: 8-24_hours.c
 * Author: Fily M Sakine <msakine20@gmail.com>
 */

#include "main.h"

/**
* jack_bauer - every minute of the day of Jack Bauer
* starting from 00:00 to 23:59
*
* Return: void
*/

void jack_bauer(void)
{
int N = 23;
int M = 60;
int i;
int j;

for (i = 0; i <= N; i++)
{
for (j = 0; j < M; j++)
{
_putchar((i / 10) + '0');
_putchar((i % 10) + '0');
_putchar(':');
_putchar((j / 10) + '0');
_putchar((j % 10) + '0');
_putchar('\n');
}
}
return;
}
