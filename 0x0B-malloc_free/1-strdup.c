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
	int i = 0;
	int len = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	i = 0;

	while (str[i++])
	{
		len++;
	}

	s = malloc((len + 1) * sizeof(char));

	if (s == NULL)
	{
		return (NULL);
	}

	i = 0;

	while (i < len)
	{
		s[i] = str[i];
		i++;
	}

	s[i] = '\0';

	return (s);
}
