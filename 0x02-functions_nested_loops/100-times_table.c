/*
 * File: 100-times_table.c
 * Author: Fily M Sakine <msakine20@gmail.com>
 */

#include "main.h"

/**
* 100-times_table - Prints the n times table, starting with 0
* @n: number
*
* Return: void
*/

void print_times_table(int n) {
	int num, mult, prod;

	if (n >= 0 && n <= 15)
	{
		for (num = 0; num <= n; num++)
		{
			putchar('0');

			for (mult = 1; mult <= n; mult++)
			{
				putchar(',');
				putchar(' ');

				prod = num * mult;

				if (prod <= 99)
					putchar(' ');
				if (prod <= 9)
					putchar(' ');

				if (prod >= 100)
				{
					putchar((prod / 100) + '0');
					putchar(((prod / 10)) % 10 + '0');
				}
				else if (prod <= 99 && prod >= 10)
				{
					putchar((prod / 10) + '0');
				}
				putchar((prod % 10) + '0');
			}
			putchar('\n');
		}
	}
    return;
}
