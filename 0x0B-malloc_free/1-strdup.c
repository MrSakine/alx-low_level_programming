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
	int len;

	i = 0;

	while (str[i++])
	{
		len++;
	}

	printf("%d\n", len);

	if (str == NULL)
	{
		return (NULL);
	}

	s = malloc((len * sizeof(char)) + 1);

	if (s == NULL)
	{
		return (NULL);
	}

	j = 0;

	while (j < len)
	{
		s[j] = str[j];
		j++;
	}

	s[j] = '\0';

	return (s);
}
