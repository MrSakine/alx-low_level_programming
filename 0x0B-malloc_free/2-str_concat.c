/*
 * File: 2-str_concat.c
 * Author: Fily M Sakine <msakine20@gmail.com>
 */

#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: NULL is passed, treat it as an empty string
 * On success, a pointer should point to a newly allocated space in memory
 * NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	int i = 0;
	int j;
	int len = 0;
	int len1 = 0;

	if (s1 == NULL && s2 == NULL)
	{
		s1 = "";
		s2 = "";
	}
	else if (s1 == NULL)
		s1 = "";
	else if (s2 == NULL)
		s2 = "";

	while (s1[i++])
		len++;
	i = 0;
	while (s2[i++])
		len1++;
	s = malloc((len + len1 + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		s[i] = s1[i];
		i++;
	}
	j = 0;
	while (j < len1)
	{
		s[i] = s2[j];
		j++;
		i++;
	}
	s[i] = '\0';
	return (s);
}
