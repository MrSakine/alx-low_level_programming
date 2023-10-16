/*
 * File: abs.c
 * Author: Fily M Sakine <msakine20@gmail.com>
 */

#include "main.h"

/**
 * _abs - Computes the absolute value of an integer
 * @n: The number to check
 *
 * Return: abs value of @n
 */
int _abs(int n)
{
	unsigned int i;

	i = n < 0 ? -n : n;
	return (i);
}