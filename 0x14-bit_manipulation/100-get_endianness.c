/*
 * File: 100-get_endianness.c
 * Author: Fily M Sakine <msakine20@gmail.com>
 */

#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: int
 */
int get_endianness(void)
{
	int a;
	char *n;

	a = 1;
	n = (char *)&a;

	return ((*n) == 1) ? (1) : (0);
}

