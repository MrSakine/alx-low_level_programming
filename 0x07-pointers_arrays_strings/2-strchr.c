/*
 * File: 2-strchr.c
 * Author: Fily M Sakine <msakine20@gmail.com>
 */

#include "main.h"

/**
 * _strchr - locates a character in a string
 *
 * @s: string source
 * @c: character to search
 *
 * Return: pointer to the first occurrence of
 * the character c in the string s,
 * or NULL if the character is not found.
 */
char *_strchr(char *s, char c)
{
	int i;
	char *f;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			f = s + i;

			return (f);
		}
	}

	return ('\0');
}
