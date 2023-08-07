/*
 * File: 1-strdup.c
 * Author: Fily M Sakine <msakine20@gmail.com>
 */

#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 *
 * @str: size of the array
 *
 * Return: NULL if str = NULL
 * A pointer to the duplicated string.
 * It returns NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
	char *s;
	int i;
	int j;

	if (str == NULL)
	{
		return (NULL);
	}

	s = malloc((sizeof(*str) * sizeof(char)) + 1);

	if (s == NULL)
	{
		return (NULL);
	}

	i = sizeof(str);
	j = 0;

	while (j < i)
	{
		s[j] = str[j];
		j++;
	}

	s[j] = '\0';

	return (s);
}
