/*
 * File: 100-argstostr.c
 * Author: Fily M Sakine <msakine20@gmail.com>
 */

#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * argstostr - frees a 2 dimensional grid previously
 * created by your alloc_grid function
 *
 * @ac: argument count
 * @av: argument vector
 *
 * Return: NULL if ac == 0 or av == NULL
 * On success, a pointer to a new string,
 * or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	char *s;
	int i;
	int j;
	int index = 0;
	int c = ac;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			c++;
		}
	}

	s = malloc(c + 1 * sizeof(char));

	if (s == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			s[index] = av[i][j];
			index++;
		}

		s[index] = '\n';
		index++;
	}

	s[c] = '\0';

	return (s);
}
