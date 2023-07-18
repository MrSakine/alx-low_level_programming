/*
 * File: 7-print_last_digit.c
 * Author: Fily M Sakine <msakine20@gmail.com>
 */

#include "main.h"

/**
* print_last_digit - Print the last digit of a number
* @n: The number to check
*
* Return: last digit of @n
*/

int print_last_digit(int n)
{
unsigned int m = n < 0 ? -n : n;
int l = m % 10;
_putchar(l + '0');
return (l);
}
