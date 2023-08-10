/*
 * File: 0-malloc_checked.c
 * Author: Fily M Sakine <msakine20@gmail.com>
 */

#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 *
 * @b: amount of memory to allocate
 *
 * Return: 98 if malloc fails
 * On success, a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *c;

	c = malloc(b);

	if (c == NULL)
	{
		exit(98);
	}

	return (c);
}
