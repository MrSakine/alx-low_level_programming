/*
 * File: 0-memset.c
 * Author: Fily M Sakine <msakine20@gmail.com>
 */

#include "main.h"

/**
 * _memset - fills memory with a constant byte
 *
 * @s: buffer
 * @b: constant byte
 * @n: byte of memory
 *
 * Return: pointer to s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
