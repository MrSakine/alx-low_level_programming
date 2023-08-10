/*
 * File: 2-calloc.c
 * Author: Fily M Sakine <msakine20@gmail.com>
 */

#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array,
 * using malloc
 *
 * @nmemb: array elements
 * @size: byte
 *
 * Return: pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;
	char *f;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	mem = malloc((nmemb * size));

	if (mem == NULL)
		return (NULL);

	f = mem;

	for (i = 0; i < (nmemb * size); i++)
		f[i] = '\0';

	return (mem);
}
