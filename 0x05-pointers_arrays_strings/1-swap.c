/*
 * File: 1-swap.c
 * Author: Fily M Sakine <msakine20@gmail.com>
 */

#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: first number
 * @b: second number
 *
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
int c;

c = *a;
*a = *b;
*b = c;

return;
}
