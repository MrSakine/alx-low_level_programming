/*
 * File: 1-string_nconcat.c
 * Author: Fily M Sakine <msakine20@gmail.com>
 */

#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 *
 * @s1: first string
 * @s2: second string
 * @n: amount of bytes to copy from second string
 *
 * Return: new string from concatenation or null
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i = 0;
	unsigned int len = n;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i++])
		len++;

	s = malloc((len + 1) * sizeof(char));

	if (s == NULL)
		return (NULL);

	len = 0;
	for (i = 0; s1[i]; i++)
		s[len++] = s1[i];

	for (i = 0; s2[i] && i < n; i++)
		s[len++] = s2[i];

	s[len] = '\0';

	return (s);
}
