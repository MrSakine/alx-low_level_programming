/*
 * File: 0-reset_to_98.c
 * Author: Fily M Sakine <msakine20@gmail.com>
 */

#include "main.h"

/**
 * reset_to_98 - takes a pointer to an int as parameter
 * and updates the value it points to to 98
 * @n: pointer to an int
 *
 * Return: Always 0.
 */

void reset_to_98(int *n)
{
int *p = n;
*p = 98;

return;
}
