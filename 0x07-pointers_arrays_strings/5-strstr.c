/*
 * File: 5-strstr.c
 * Author: Fily M Sakine <msakine20@gmail.com>
 */

#include "main.h"

/**
 * _strstr - locates a substring
 *
 * @haystack: string source
 * @needle: substring source
 *
 * Return: pointer to the beginning of the located substring,
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	if (*needle == 0)
	{
		return (haystack);
	}

	for (i = 0; needle[i] != '\0'; i++)
	{
		for (j = 0; haystack[j] != '\0'; j++)
		{
			if (needle[i] == haystack[j])
			{
				return (haystack + j);
			}
			else if (needle[i + 1] == '\0')
			{
				return (haystack);
			}
		}
	}

	return ('\0');
}
