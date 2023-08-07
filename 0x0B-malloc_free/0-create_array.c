/*
 * File: 0-create_array.c
 * Author: Fily M Sakine <msakine20@gmail.com>
 */

#include "main.h"

/**
 * create_array - creates an array of chars, and
 * initializes it with a specific char.
 *
 * @size: size of the array
 * @c: character
 *
 * Return: NULL if size = 0
 * A pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *s;

	if (size == 0)
	{
		return (NULL);
	}

	s = malloc((size + 1) * sizeof(char));

	if (s == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (i < size)
	{
		s[i] = c;
		i++;
	}

	s[i] = '\0';

	return (s);
}
